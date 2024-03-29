#ifndef STACK_H
#define STACK_H

#include <iostream>

#include "Node.h"

class Stack
{
    public:
        Stack();
        Stack(int);
        Stack(const Stack &);
        void setCapacity(const int);
        int getCapacity() const;
        int getSize() const;
        void setHead(Node *);
        Node *getHead() const;
        bool empty() const;
        bool full() const;
        void push(int);
        Node *top();
        Node *pop();
        void clear();
        bool search(int);
        void print() const;
        ~Stack();
    private:
        int capacity;
        int size;
        Node *head;
};

std::ostream& operator<< (std::ostream &output, const Stack &o);

#endif

