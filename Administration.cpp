#include "Administration.h"

Administration::Administration() : Colleague()
{
}

Administration:: Administration(
        std::string name, std::string phoneNumber, std::string email,
        int birthYear, std::string title, std::string workTitle)
    : Colleague(name, phoneNumber, email, birthYear, title, workTitle)
{

}

Administration::~Administration()
{
}

bool Administration::operator==(const Administration& a) const
{
    return false;
}

bool Administration::operator!=(const Administration& a) const
{
    return false;
}

std::string Administration::toStringSpecc() const
{
    std::stringstream ss;
    ss << typeid(*this).name() << std::endl;
    ss << Colleague::toString() << std::endl;
    return ss.str();
}
