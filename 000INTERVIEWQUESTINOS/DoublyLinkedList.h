#pragma once
#include "Node.h"
class DoublyLinkedList {
    Node *head, *tail;
    int length;
    public:
        DoublyLinkedList(int value);
        ~DoublyLinkedList();
        Node* get(int idx);
        bool set(int idx, int val);
        // Node insertion
        void prepend(int val);
        bool insert(int idx, int val);
        void append(int val);
        // Node deletion
        void deleteFirst();
        void deleteNode(int idx);
        void deleteLast();
        // DLL info
        void printList();
        Node* getHead();
        Node* getTail();
        int getLength();
        // Misc ops
};