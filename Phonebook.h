#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>

#include "List.h"
#include "LinkedList.h"
#include "Reader.h"
#include "FileReader.h"
#include "Person.h"
#include "Friend.h"
#include "Administration.h"
#include "Colleague.h"

using std::string;
using std::endl;
using std::cout;

class Phonebook
{
private:
    List<Person> *list;
    FileReader<Person> *reader;
public:
    Phonebook();
    ~Phonebook();
    bool loadBook(string filename);
    bool saveBook(string filename);
    bool removePerson(Person *p);
    bool addPerson(Person *p);
    Person*& findPerson(unsigned int pos) const;
    unsigned int size() const;
};

#endif
