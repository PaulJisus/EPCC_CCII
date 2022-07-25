#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include <utility>
#include "Node.h"

class LinkedList {
        int size;
        Node *head;
    public:

        LinkedList();
        LinkedList(int);
        LinkedList(const LinkedList &);

        ~LinkedList();

        void insert(int);

        void removeByValue(int);
        void removeByPosition(int);

        bool search(int value);
        LinkedList operator +(const LinkedList&);
		LinkedList& operator =(const LinkedList&);

        friend std::ostream& operator <<(std::ostream &salida1,const LinkedList& C);
};

#endif
