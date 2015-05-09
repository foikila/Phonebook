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
    this->setTitle(title);
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

bool Person::operator!=(const Person &p) const
{
    // Should only be one person with the same name and number
    return this->getName() != p.getName() && this->getPhoneNumber() != p.getPhoneNumber();
}

std::ostream& Person::operator<<(std::ostream &os)
{
    os << this->toString();
    return os;
}

std::string Person::toFileString() const
{
    std::stringstream ss;
    ss << this->toFileStringSpecc();
    ss << this->name << std::endl;
    ss << this->phoneNumber << std::endl;
    ss << this->email << std::endl;
    ss << this->birthYear << std::endl;
    ss << this->title << std::endl;
    return ss.str();
}

std::string Person::toString() const
{
    std::stringstream ss;
    ss << this->title << std::endl;
    ss << "Name: " <<  this->name << std::endl;
    ss << this->toStringSpec();
    ss << "Phonenumber: " << this->phoneNumber << std::endl;
    ss << "Email: " <<  this->email << std::endl;
    ss << "BirthYear: " << this->birthYear << std::endl;
    return ss.str();
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
    std::transform(title.begin(), title.end(), title.begin(), ::toupper);
    this->title = title;
}
