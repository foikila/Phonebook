#include "Colleague.h"

Colleague::Colleague() : Person()
{
    this->workTitle = DEFAULT;
}

Colleague::Colleague(std::string name, std::string phoneNumber, std::string email,
       int birthYear, std::string title, std::string workTitle)
    : Person( name, phoneNumber, email, birthYear, title)
{
    this->workTitle = workTitle;
}

Colleague::~Colleague()
{
}

bool Colleague::operator==(const Colleague& f) const
{
    return this->getName() == f.getName() && this->getPhoneNumber() == f.getPhoneNumber() &&
            this->getEmail() == f.getEmail() && this->getBirthYear() == f.getBirthYear() &&
            this->getTitle() == f.getTitle() && this->workTitle == f.workTitle;
}

bool Colleague::operator!=(const Colleague& f) const
{
    return this->getName() != f.getName() && this->getPhoneNumber() != f.getPhoneNumber() &&
                this->getEmail() != f.getEmail() && this->getBirthYear() != f.getBirthYear() &&
                this->getTitle() != f.getTitle() && this->workTitle != f.workTitle;
}

std::string Colleague::getWorkTitle() const
{
    return this->workTitle;
}

void Colleague::setWorkTitle(std::string title)
{
    this->workTitle = title;
}

std::string Colleague::toStringSpec() const {
    std::stringstream ss;
    ss << typeid(*this).name() << std::endl;
    ss << this->workTitle << std::endl;
    return ss.str();
}
