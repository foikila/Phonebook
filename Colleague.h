#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include <sstream>
#include <string>

#include "Person.h"

class Colleague : public Person
{
private:
    std::string workTitle;
public:
    Colleague();
    Colleague(std::string name, std::string phoneNumber, std::string email,
              int birthYear, std::string title, std::string workTitle);
    virtual ~Colleague();
    Colleague& operator=(const Colleague& c);
    bool operator==(const Colleague& c) const;
    bool operator!=(const Colleague& c) const;
    virtual std::string toStringSpec() const = 0;
    virtual std::string toFileStringSpecc() const = 0;

    std::string getWorkTitle() const;

    void setWorkTitle(std::string title);
};

#endif
