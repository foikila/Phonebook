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
    ~Administration();
    bool operator==(const Administration& a) const;
    bool operator!=(const Administration& a) const;
    std::string toStringSpecc() const;
};

#endif
