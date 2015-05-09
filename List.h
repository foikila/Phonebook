#ifndef LIST
#define LIST

#include <sstream>

template <typename T>
class List
{
public:
    virtual ~List<T>() {};
    virtual void insert(T *element) = 0;
    // virtual void insertAt(const int pos, T *element) = 0;
    virtual T*& elementAt(const unsigned int pos) const = 0;
    virtual T* peek() = 0;
    virtual T* remove() = 0;
    virtual T* remove(T *element) = 0;
    virtual unsigned int size() const = 0;
    virtual bool isEmpty() const = 0;
    virtual std::string toString(bool pretty) const = 0;
};

#endif
