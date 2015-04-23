#ifndef FILEREADER_H
#define FILEREADER_H

#include "List.h"
#include "LinkedList.h"
#include "Person.h"
#include "Reader.h"
#include "Colleague.h"
#include "Friend.h"
#include "Administration.h"

template <typename T>
class FileReader : public Reader<T>
{
public:
    FileReader();
    FileReader(std::string filename);
    virtual ~FileReader();

    // Loads data from storage
    List<T>* read() const;
    void read(List<T> *&list ) const;
    // Saves data to storage
    bool save(List<T> *&data) const;
};

template <typename T>
FileReader<T>::FileReader() : Reader<T>()
{
    // TODO insert default filename here
    this->setFileName("");
}

template <typename T>
FileReader<T>::FileReader(std::string filename) : Reader<T>(filename)
{
}

template <typename T>
FileReader<T>::~FileReader()
{
}

// Loads data from storage
template <typename T>
List<T>* FileReader<T>::read() const
{
    List<T> *list = new LinkedList<T>();
    std::ifstream read(this->getFileName());
    if (!read.is_open()) {
        delete list;
        throw "Failed to open file";
    }

    // list->insertAt(0, p);
    return list;
}

template <typename T>
void FileReader<T>::read(List<T> *&list) const
{

}

// Saves data to storage
template <typename T>
// Should this be a reference or not?
bool FileReader<T>::save(List<T> *&data) const
{
    if (!this->getFileName().empty()) {
        std::ofstream write(this->getFileName());
        std::string type;
        while(data->isEmpty() == false) {
            Person *p = data->removeAt((0));
            Administration* a = dynamic_cast<Administration*>(p);
            Friend *f = dynamic_cast<Friend*>(p);

            if (a) {
                type = "adm";
            } else if (f) {
                type = "friend";
            }
            write << type << std::endl;
            write << p->toString() << std::endl;
            //delete p;
        }
        write.close();
        return true;
    }
    return false;
}

#endif
