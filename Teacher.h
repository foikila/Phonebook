#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <sstream>

#include "Person.h"
#include "Colleague.h"

class Teacher : public Colleague
{
private:
    std::string grade;
public:
    Teacher();
    Teacher(std::string name, std::string phoneNumber, std::string email,
            int birthYear, std::string title, std::string workTitle, std::string grade);
    virtual ~Teacher();
    std::string getGrade() const;
    void setGrade(std::string grade);

    virtual std::string toFileStringSpecc() const;
    virtual std::string toStringSpec() const;
    virtual std::string getClassName() const;
};

#endif
