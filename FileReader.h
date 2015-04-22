#ifndef FILEREADER_H
#define FILEREADER_H

#include "List.h"
#include "LinkedList.h"
#include "Reader.h"

template <typename T>
class FileReader : public Reader<T>
{
public:
    FileReader();
    FileReader(std::string filename);
    virtual ~FileReader();

    // Loads data from storage
    List<T>* read() const;
    // Saves data to storage
    bool save() const;
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
    return nullptr;
}

// Saves data to storage
template <typename T>
bool FileReader<T>::save() const
{
    return false;
}

#endif
