#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "List.h"
#include <sstream>
#include <string>

template <typename T>
class LinkedList : public List<T>
{
private:
        class Node {
            public:
                Node(T element) {
                    this->element = element;
                    this->next = nullptr;
                }
                T element;
                Node *next;
                ~Node() {}
        };
        Node *first;
        int NrOfElements;
    public:
        LinkedList();
        LinkedList(const LinkedList &list);
        virtual ~LinkedList();
        LinkedList& operator=(const LinkedList &right);
        void insertAt(int pos, T element);
        T elementAt(int pos) const;
        T removeAt(int pos);
        int size() const;
        bool isEmpty() const;
        std::string toString() const;
};

template<typename T>
LinkedList<T>::LinkedList()
{
    this->first = nullptr;
    this->NrOfElements = 0;
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList& list)
{
    this->nrOfElements = list.nrOfElements;
    if (list.first != nullptr) {
        Node* walker = list.first;
        this->first = new Node(walker->element);
        Node* last = this->first;
        walker = walker->next;
        while (walker != nullptr) {
            last->next = new Node(walker->element);
            last = last->next;
            walker = walker->next;
        }
    }
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    Node *walker = this->first;
    while (walker != nullptr) {
        this->first = walker->next;
        delete walker;
        walker = this->first;
    }
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T> &right) {
    if (this != &right) {
        // Utf�r kopiering enligt kopieringskontruktorn
        Node *walker = right.first;
        this->first = new Node(walker->element);
        Node *last = this->first;
        walker = walker->next;
        while (walker != nullptr) {
            last->next = new Node(walker->element);
            last = last->next;
            walker = walker->next;
        }
        // avallocela befintliga noder
        Node *temp = this->first;
        while (temp != nullptr) {
            this->temp = walker->next;
            delete temp;
            temp = this->first;
        }
    }
    return *this;
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList& list)
{
    this->nrOfElements = list.nrOfElements;
    if (list.first != nullptr) {
        Node* walker = list.first;
        this->first = new Node(walker->element);
        Node* last = this->first;
        walker = walker->next;
        while (walker != nullptr) {
            last->next = new Node(walker->element);
            last = last->next;
            walker = walker->next;
        }
        Node* temp = this->first;
        while (temp != nullptr) {
            temp = walker->next;
            delete temp;
            temp = this->first;
        }
    }
    return *this;
}

template<typename T>
void LinkedList<T>::insertAt(int pos, T element)
{
    if (pos < 0) {
        throw "Exeption in insertAt negative value";
    }
    if (this->first == nullptr) {
        this->first = new Node(element);
        this->NrOfElements++;
    }  else if (pos == 0) {
        Node *temp = this->first;
        temp = temp->next;
        this->first = new Node(element);
        this->first->next = temp;
        this->NrOfElements++;
    } else if (pos > -1 && pos <= this->NrOfElements) {
        Node *walker = this->first;
        for (int i = 0; i < pos - 1; i++) {
            walker = walker->next;
        }
        Node * temp = walker->next;
        walker->next = new Node(element);
        walker = walker->next;
        walker->next = temp;

        this->NrOfElements++;
    } else {
        Node * walker = this->first;
        while (walker->next != nullptr) {
            walker = walker->next;
        }
        walker->next = new Node(element);
        this->NrOfElements++;
    }
}

template<typename T>
T LinkedList<T>::elementAt(int pos) const
{
    if (pos < 0) {
        throw "Exeption in elementAt negative value";
    }
    if (pos >= this->NrOfElements) {
        throw "Exeption in elementAt Out of bound";
    }
    if (this->first != nullptr) {
        if (pos > -1 && pos <= this->NrOfElements) {
            Node *walker = this->first;
            for (int i = 0; i < pos; i++) {
                walker = walker->next;
            }
            return walker->element;
        }
    }
    return T();
}

template<typename T>
T LinkedList<T>::removeAt(int pos)
{
    if (pos < 0) {
        throw "Exeption in removeAt: negative value";
    }
    if (this->first == nullptr) {
        throw "Exeption in removeAt: Empty list";
    }
    if (pos >= this->NrOfElements) {
        throw "Exeption in removeAt: Out of bound";
    }
    if (this->first != nullptr && pos > 0 && pos <= this->NrOfElements) {
        Node *walker = this->first;
        int counter = 0;
        while (counter < pos - 1) {
            walker = walker->next;
            counter++;
        }
        Node *toDelete = walker->next;
        T ret = toDelete->element;
        walker->next = toDelete->next;
        delete toDelete;
        this->NrOfElements--;
        return ret;
    } else if (this->first != nullptr && pos == 0) {
        Node *toDelete = this->first;
        T ret = toDelete->element;
        this->first = toDelete->next;
        delete toDelete;
        this->NrOfElements--;
        return ret;
    } else {
        return T();
    }
}

template<typename T>
int LinkedList<T>::size() const
{
    return this->NrOfElements;
}

template<typename T>
bool LinkedList<T>::isEmpty() const
{
    return this->NrOfElements > 0;
}

template<typename T>
std::string LinkedList<T>::toString() const
{
    std::stringstream stream;
    Node *walker = this->first;
    while (walker != nullptr) {
        stream << walker->element << ", ";
        walker = walker->next;
    }
    return stream.str();
}

#endif
