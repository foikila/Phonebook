#include "Teacher.h"

Teacher::Teacher() : Colleague()
{
    this->grade = "";
}

Teacher::Teacher(
        std::string name, std::string phoneNumber, std::string email,
        int birthYear, std::string title, std::string workTitle, std::string grade
                 ) : Colleague(name, phoneNumber, email, birthYear, title, workTitle)
{
    this->grade = grade;
}

void Teacher::setGrade(std::string grade)
{
    this->grade = grade;
}

std::string Teacher::getGrade() const
{
    return this->grade;
}

std::string Teacher::toStringSpec() const
{
    std::stringstream ss;
    ss << "Group: " << this->getClassName() << std::endl;
    ss << "Title: " << this->getWorkTitle() << std::endl;
    ss << "Grade: " << this->getGrade() << std::endl;
    return ss.str();
}

std::string Teacher::getClassName() const
{
    std::string className = typeid(*this).name();
    return className.erase(0, 1);
}

std::string Teacher::toFileStringSpecc() const
{
    std::stringstream ss;
    ss << this->getClassName() << std::endl;
    ss << this->getWorkTitle() << std::endl;
    ss << this->getGrade() << std::endl;
    return ss.str();
}
