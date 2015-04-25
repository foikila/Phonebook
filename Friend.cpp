#include "Friend.h"

Friend::Friend() : Person()
{
    this->homeNumber = DEFAULT;
}

Friend::Friend(std::string name, std::string phoneNumber, std::string email,
       int birthYear, std::string title, std::string homeNumber)
    : Person( name, phoneNumber, email, birthYear,title)
{
    this->homeNumber = homeNumber;
}

Friend::Friend(const Friend& f) : Person(f)
{
    this->homeNumber = f.homeNumber;
}

Friend::~Friend()
{

}

bool Friend::operator==(const Friend& f) const
{
    return this->getName() == f.getName() && this->getPhoneNumber() == f.getPhoneNumber() &&
            this->getEmail() == f.getEmail() && this->getBirthYear() == f.getBirthYear() &&
            this->getTitle() == f.getTitle() && this->getHomeNumber() == f.getHomeNumber();
}

bool Friend::operator!=(const Friend& f) const
{
    return this->getName() != f.getName() && this->getPhoneNumber() != f.getPhoneNumber() &&
            this->getEmail() != f.getEmail() && this->getBirthYear() != f.getBirthYear() &&
            this->getTitle() != f.getTitle() && this->getHomeNumber() != f.getHomeNumber();
}

std::ostream& Friend::operator<<(std::ostream& os)
{
    os << this->toString();
    return os;
}

std::string Friend::getHomeNumber() const
{
    return this->homeNumber;
}

void Friend::setHomeNumber(std::string number)
{
    this->homeNumber = number;
}
std::string Friend::getClassName() const
{
    std::string className = typeid(*this).name();
    return className.erase(0, 1);
}

std::string Friend::toStringSpec() const
{
    std::stringstream ss;
    ss << this->getClassName() << std::endl;
    ss << this->homeNumber << std::endl;
    return ss.str();
}
