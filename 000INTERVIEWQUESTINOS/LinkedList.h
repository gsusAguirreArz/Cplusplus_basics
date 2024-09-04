#pragma once
#include "Node.h"
class LinkedList {
    Node *head, *tail;
    int length;
    public:
        LinkedList(int value);
        ~LinkedList();
        Node* get(int index); //get node in postion idx
        bool set(int index, int value); // modify value of node at position idx
        // Node insertion
        void prepend(int value); // add node with value val at begining
        bool insert(int index, int value); // add node with value val at position idx
        void append(int value); // add node with value val at end
        // Node deletion
        void deleteFirst(); // delete first node
        void deleteNode(int index); // delete node at position idx
        void deleteLast(); // delete last node
        // LL info
        void printList(); // print ll in console
        Node* getHead(); // get head node
        Node* getTail(); // get tail node
        int getLength(); // get ll length
        // Misc ll ops
        void reverse(); // reverse full ll
        void partitionList(int x); // partition ll based on val x
        void removeDuplicates(); // remove duplicates of ll
        void reverseBetween(int m, int n); // reverse ll between nodes with idx (m,n)
};
