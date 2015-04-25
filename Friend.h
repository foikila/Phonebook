#ifndef FRIEND_H
#define FRIEND_H

#include "Person.h"

#include <sstream>
#include <string>
#include <ostream>

class Friend : public Person
{
private:
    std::string homeNumber;
public:
    Friend();
    Friend(std::string name, std::string phoneNumber, std::string email,
           int birthYear, std::string title, std::string homeNumber);
    Friend(const Friend& f);
    virtual ~Friend();
    // Friend& operator=(const Friend& f);

    bool operator==(const Friend& f) const;
    bool operator!=(const Friend& f) const;
    std::ostream& operator<<(std::ostream& os);
    std::string toStringSpec() const;
    std::string getClassName() const;

    std::string getHomeNumber() const;

    void setHomeNumber(std::string number);
};

#endif
