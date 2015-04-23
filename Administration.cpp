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

std::string Administration::toString() const
{
    std::stringstream ss;
    ss << Colleague::toString() << std::endl;
    ss << std::endl;
    return ss.str();
}
