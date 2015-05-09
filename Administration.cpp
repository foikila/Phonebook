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
    return this->getName() == a.getName() && this->getWorkTitle() != a.getWorkTitle();
}

bool Administration::operator!=(const Administration& a) const
{
    return this->getName() != a.getName() && this->getWorkTitle() != a.getWorkTitle();
}
std::string Administration::getClassName() const
{
    std::string className = typeid(*this).name();
    return className.erase(0, 1);
}

std::string Administration::toStringSpec() const
{
    std::stringstream ss;
    ss << "Group: " << this->getClassName() << std::endl;
    ss << "Title: " << this->getWorkTitle() << std::endl;
    return ss.str();
}
