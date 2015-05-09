#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <sstream>
#include <iostream>

using std::stringstream;

template <typename T>
class LinkedList : public List<T>
{
private:
    class Node {
        public:
            Node(T *element) {
                this->element = element;
                this->next = nullptr;
            }
            T *element;
            Node *next;
            ~Node() {}
    };
    Node *first;
    unsigned int nrOfEle;
public:
    LinkedList();
    LinkedList(const LinkedList &l);
    LinkedList& operator=(const LinkedList &right);
    virtual ~LinkedList();
    void insert(T *element);
    T* peek();
    T* remove();
    T* remove(T *element);
    unsigned int size() const;
    bool isEmpty() const;
    std::string toString(bool pretty) const;
    T*& elementAt(const unsigned int) const;
};

template <typename T>
LinkedList<T>::LinkedList()
{
    this->first = nullptr;
    this->nrOfEle = 0;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList &l)
{
    this->nrOfEle = l.nrOfEle;
    if (!l.isEmpty()) {
        Node *walker = l.first;
        this->first = new Node(walker->element);
        Node *last = this->first;
        walker = walker->next;
        while (walker != nullptr) {
            last->next = new Node(walker->element);
            last = last->next;
            walker = walker->next;
        }
    }
}

template <typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList &l)
{
    this->nrOfEle = l.nrOfEle;
    if (!l.isEmpty()) {
        Node *walker = l.first;
        this->first = new Node(walker->element);
        Node *last = this->first;
        walker = walker->next;
        while (walker != nullptr) {
            last->next = new Node(walker->element);
            last = last->next;
            walker = walker->next;
        }
        Node *temp = this->first;
        while (temp != nullptr) {
            this->first = temp->next;
            // should this be here?
            delete temp->element;
            delete temp;
            temp = this->first;
        }
    }
    return *this;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node *walker = this->first;
    while (walker != nullptr) {
        this->first = walker->next;
        delete walker;
        walker = this->first;
    }
}

template <typename T>
void LinkedList<T>::insert(T *element)
{
    if (this->isEmpty()) {
        std::cout << element << std::endl;
        this->first = new Node(element);
    } else {
        Node *walker = this->first;
        while (walker->next != nullptr) {
            walker = walker->next;
        }
        walker->next = new Node(element);
    }
    this->nrOfEle++;
}

template <typename T>
T* LinkedList<T>::peek()
{
    return this->first->element;
}

template <typename T>
T* LinkedList<T>::remove()
{
    if (!this->isEmpty()) {
        Node *toDelete = this->first;
        T *ret = toDelete->element;
        this->first = toDelete->next;
        delete toDelete;
        this->nrOfEle--;
        return ret;
    }
    return nullptr;
}

template <typename T>
T* LinkedList<T>::remove(T *element)
{
    /*if (!this->isEmpty()) {
        Node *walker = this->first;
        // Walks and linear seachers the element //
        while (walker != nullptr && *walker != *element) {
            walker = walker->next;
        }
        std::cout <<  walker->element << std::endl;
        T* ret = walker->element;
        std::cout << ret << std::endl;
        delete walker;
        this->nrOfEle--;
        return ret;
    }*/
    return nullptr;
}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
    return this->first == nullptr;
}

template <typename T>
unsigned int LinkedList<T>::size() const
{
    return this->nrOfEle;
}

template <typename T>
std::string LinkedList<T>::toString(bool pretty) const
{
    std::stringstream ss;
    Node *walker = this->first;
    while (walker != nullptr) {
        if (pretty) {
            ss << walker->element->toString();
        } else {
            ss << walker->element->toFileString();
        }
        walker = walker->next;
    }
    return ss.str();
}

template <typename T>
T*& LinkedList<T>::elementAt(const unsigned int pos) const
{
    using namespace std;
    if (pos > 0 && pos > this->nrOfEle) {
        throw "index out of bound";
    } else if (!this->isEmpty()) {
        Node *walker = this->first;
        for (unsigned int i = 0; i < pos && walker != nullptr; i++) {
            walker = walker->next;
        }

        return walker->element;
    }
    throw "Trying to get element that does not exist";
}

#endif
