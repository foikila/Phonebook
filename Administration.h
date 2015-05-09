#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include "Colleague.h"

#include <sstream>
#include <string>


class Administration : public Colleague
{
private:

public:
    Administration();
    Administration(std::string name, std::string phoneNumber, std::string email,
                   int birthYear, std::string title, std::string workTitle);
    virtual ~Administration();
    bool operator==(const Administration& a) const;
    bool operator!=(const Administration& a) const;
    virtual std::string toFileStringSpecc() const;
    virtual std::string toStringSpec() const;
    virtual std::string getClassName() const;
};

#endif
