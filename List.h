#ifndef LIST
#define LIST

#include <string>

template <typename T>
class List
{
public:
    virtual ~List<T>() {};
    virtual void insertAt(const int pos, T element) = 0;
    virtual T elementAt(const int pos) const = 0;
    virtual T removeAt(const int pos) = 0;
    virtual int size() const = 0;
    virtual bool isEmpty() const = 0;
    virtual std::string toString() const = 0;
};

#endif
