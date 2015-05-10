#ifndef FILEREADER_H
#define FILEREADER_H

#include "List.h"
#include "LinkedList.h"
#include "Person.h"
#include "Reader.h"
#include "Colleague.h"
#include "Friend.h"
#include "Administration.h"
#include "Teacher.h"

#include <iostream>
#include <ostream>
#include <fstream>

template <typename T>
class FileReader : public Reader<T>
{
private:
    std::string filename;
    void internalRead(List<T> *&list);
public:
    FileReader();
    FileReader(std::string filename);
    virtual ~FileReader();

    void setFileName(const std::string filename);
    std::string getFileName() const;

    // Loads data from storage
    List<T>* read();
    void read(List<T> *&list);
    // Saves data to storage
    bool save(List<T> *&data) const;
};

template <typename T>
void FileReader<T>::internalRead(List<T> *&list)
{
    std::ifstream read(this->filename.c_str());
    if (read.is_open()) {
        unsigned int nrOfElements;
        std::string name;
        std::string phoneNumber;
        std::string email;
        unsigned int birthYear;
        std::string title;
        std::string homeNumber;
        std::string classType;
        std::string workTitle;
        std::string grade;

        read >> nrOfElements;
        read.ignore();
        Person *p = nullptr;
        for (unsigned int i = 0; i < nrOfElements; i++) {
            read >> classType;
            if (classType == "Friend") {
                read >> homeNumber;
                read.ignore();
                std::getline(read, name);
                read >> phoneNumber;
                read >> email;
                read >> birthYear;
                read >> title;
                p = new Friend(name, phoneNumber, email, birthYear, title, homeNumber);
            } else if (classType == "Administration") {
                read.ignore();
                read >> workTitle;
                read.ignore();
                std::getline(read, name);
                read >> phoneNumber;
                read >> email;
                read >> birthYear;
                read >> title;
                p = new Administration(name, phoneNumber, email, birthYear, title, workTitle);
            } else if (classType == "Teacher") {
                read.ignore();
                read >> workTitle;
                read >> grade;
                read.ignore();
                std::getline(read, name);
                read >> phoneNumber;
                read >> email;
                read >> birthYear;
                read >> title;

                p = new Teacher(name, phoneNumber, email, birthYear, title, workTitle, grade);
            } else {
                throw "Read error: Classtype: \"" + classType + "\" not supported";
            }
            list->insert(p);
        }
    }
    read.close();
}

template <typename T>
FileReader<T>::FileReader() : Reader<T>()
{
    this->filename = "";
}

template <typename T>
FileReader<T>::FileReader(std::string filename) : Reader<T>()
{
    this->filename = filename;
}

template <typename T>
FileReader<T>::~FileReader()
{
}


template <typename T>
void FileReader<T>::setFileName(const std::string filename)
{
    this->filename = filename;
}

template <typename T>
std::string FileReader<T>::getFileName() const
{
    return this->filename;
}

// Loads data from storage
template <typename T>
List<T>* FileReader<T>::read()
{
    List<T> *list = new LinkedList<T>();
    try {
        this->internalRead(list);
    }  catch (std::string e) {
        throw e.c_str();
    }

    return list;
}

template <typename T>
void FileReader<T>::read(List<T> *&list)
{
    try {
        this->internalRead(list);
    }  catch (std::string e) {
        throw e.c_str();
    }
}

// Saves data to storage
template <typename T>
bool FileReader<T>::save(List<T> *&data) const
{
    if (!this->getFileName().empty()) {
        std::ofstream write(this->filename.c_str());
        write << data->size() << std::endl;
        write << data->toString(false);
        write.close();
        return true;
    }
    return false;
}

#endif
