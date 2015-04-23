#ifndef READER_H
#define READER_H

#include "List.h"
#include <fstream>
#include <string>

template <typename T>
class Reader
{
private:
    std::string filename;
public:
    Reader();
    Reader(const Reader& r);
    Reader(const std::string filename);
    Reader& operator=(const Reader& r);
    virtual ~Reader();

    void setFileName(const std::string filename);

    std::string getFileName() const;

    // Loads data from storage
    virtual List<T>* read() const = 0;
    virtual void read(List<T> *&list ) const = 0;
    // Saves data to storage
    virtual bool save(List<T> *&data) const = 0;
};

template <typename T>
Reader<T>::Reader()
{
}

template <typename T>
Reader<T>::Reader(const Reader& r)
{
    this->filename = r.filename;
}

template <typename T>
Reader<T>& Reader<T>::operator=(const Reader& r)
{
    this->filename = r.filename;
}

template <typename T>
Reader<T>::Reader(const std::string filename)
{
    this->filename = filename;
}

template <typename T>
Reader<T>::~Reader()
{
}

template <typename T>
void Reader<T>::setFileName(const std::string filename)
{
    this->filename = filename;
}

template <typename T>
std::string Reader<T>::getFileName() const
{
    return this->filename;
}

#endif
