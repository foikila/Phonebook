#include "Phonebook.h"

Phonebook::Phonebook()
{
    this->list = nullptr;
    this->reader = new FileReader<Person>();
}

Phonebook::~Phonebook()
{
    delete this->list;
}

bool Phonebook::loadBook(string filename)
{
    this->reader->setFileName(filename);
    if (this->list == nullptr) {
        try {
            this->list = this->reader->read();
        } catch (const char *e) {
            cout << e << endl;
            return false;
        }
        return true;
    } else {
        try {
            this->reader->read(this->list);
        } catch (const char *e) {
            cout << e << endl;
            return false;
        }
        return true;
    }
    return false;
}

bool Phonebook::saveBook(string filename)
{
    try {
        this->reader->setFileName(filename);
        this->reader->save(this->list);
    } catch (const char *e) {
        cout << e << endl;
        return false;
    }
    return true;
}

bool Phonebook::removePerson(Person *p) const
{
    try {
        Person* ret = this->list->remove(p);
        delete ret;
        ret = nullptr;
        return true;
    } catch (const char *e) {
        cout << e << endl;
        return false;
    }
}

bool Phonebook::addPerson(Person *p) const
{
    try {
        this->list->insert(p);
        return true;
    } catch (const char *e) {
        cout << e << endl;
        return false;
    }
}
