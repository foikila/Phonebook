#include "Person.h"

Person::Person()
{
    this->name = DEFAULT;
    this->phoneNumber = DEFAULT;
    this->email = DEFAULT;
    this->birthYear = 1970;
    this->title = DEFAULT;
}

Person::Person(std::string name, std::string phoneNumber, std::string email,
               int birthYear, std::string title)
{
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->birthYear = birthYear;
    this->title = title;
}

Person::Person(const Person& p)
{
    this->name = p.name;
    this->phoneNumber = p.phoneNumber;
    this->email = p.email;
    this->birthYear = p.birthYear;
    this->title = p.title;
}

Person& Person::operator=(const Person& p)
{
    this->name = p.name;
    this->phoneNumber = p.phoneNumber;
    this->email = p.email;
    this->birthYear = p.birthYear;
    this->title = p.title;
    return *this;
}

std::string Person::toString() const
{
    return "";
}

std::string Person::getName() const
{
    return this->name;
}

std::string Person::getPhoneNumber() const
{
    return this->phoneNumber;
}

std::string Person::getEmail() const
{
    return this->email;
}

unsigned int Person::getBirthYear() const
{
    return this->birthYear;
}

std::string Person::getTitle() const
{
    return this->title;
}

void Person::setName(std::string name)
{
    this->name = name;
}

void Person::setPhoneNumber(std::string number)
{
    this->phoneNumber = number;
}

void Person::setEmail(std::string email)
{
    this->email = email;
}

void Person::setBirthYear(unsigned int year)
{
    this->birthYear = year;
}

void Person::setTitle(std::string title)
{
    this->title = title;
}


















