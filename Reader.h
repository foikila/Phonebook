#ifndef READER_H
#define READER_H

#include "List.h"
#include <fstream>
#include <string>

template <typename T>
class Reader
{
public:
    virtual ~Reader() {}

    // Loads data from storage
    virtual List<T>* read()  = 0;
    virtual void read(List<T> *&list ) = 0;
    // Saves data to storage
    virtual bool save(List<T> *&data) const = 0;
};

#endif
