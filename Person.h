#ifndef PERSON_H
#define PERSON_H

#include <sstream>
#include <string>

const std::string DEFAULT = "invalid";

class Person
{
private:
    std::string name;
    std::string phoneNumber;
    std::string email;
    unsigned int birthYear;
    std::string title;
public:
    Person();
    Person(std::string name, std::string phoneNumber, std::string email,
           int birthYear, std::string title);
    Person(const Person& p);
    virtual ~Person() {}
    Person& operator=(const Person& p);
    virtual std::string toString() const = 0;

    std::string getName() const;
    std::string getPhoneNumber() const;
    std::string getEmail() const;
    unsigned int getBirthYear() const;
    std::string getTitle() const;

    void setName(std::string name);
    void setPhoneNumber(std::string number);
    void setEmail(std::string email);
    void setBirthYear(unsigned int year);
    void setTitle(std::string title);
};

#endif
