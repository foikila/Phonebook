#include "Phonebook.h"

Phonebook::Phonebook()
{
    this->list = new LinkedList<Person>();
    this->reader = new FileReader<Person>();
}

Phonebook::~Phonebook()
{
    delete this->list;
    delete this->reader;
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

bool Phonebook::removePerson(Person *p)
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

bool Phonebook::addPerson(Person *p)
{
    try {
        this->list->insert(p);
        return true;
    } catch (const char *e) {
        cout << e << endl;
        return false;
    }
}

Person*& Phonebook::findPerson(const unsigned int pos) const
{
    return this->list->elementAt(pos);
}

Person*& Phonebook::findPerson(const std::string name) const
{
    for (int i = 0; i < this->list->size(); i++) {
        if (this->list->elementAt(i)->getName() == name) {
            return this->list->elementAt(i);
        }
    }
}

unsigned int Phonebook::size() const
{
    return this->list->size();
}

