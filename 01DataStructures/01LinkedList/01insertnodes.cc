#include <iostream>

using namespace std;


class Node{
    public:
        int value;
        Node* next;
};

void insertAtTheFront(Node** head, int newValue){
    // 1. prepare a new node
    Node* newNode = new Node();
    newNode -> value = newValue;
    // 2. Put ir in front of current head
    newNode -> next = *head;
    // 3. Move head of the list to point the new node
    *head = newNode;
}

void insertAtTheEnd(Node** head, int newValue){
    // 1. prepare the new node
    Node* newNode = new Node();
    newNode -> value = newValue;
    newNode -> next = NULL;
    // 2. if linked list is empty, new node will be a head node
    if ( *head == NULL ){
        *head = newNode;
        return;
    }
    // 3. find the last node
    Node* last = *head;
    while( last -> next != NULL ){
        last = last -> next;
    }
    // 4. insert new node after alst node
    last -> next = newNode;
}

void insertAfter(Node* previous, int newValue){
    // 1. check if previous node is NULL
    if ( previous == NULL ){
        cout << "PRevious can not be NULL" << endl;
        return;
    }
    // 2. prepare a newnode
    Node* newNode = new Node();
    newNode -> value = newValue;
    // 3. insert newnode after previous
    newNode -> next = previous -> next;
    previous -> next = newNode;
}


void printList(Node* n){
    while ( n != NULL ){
        cout << n -> value << endl;
        n = n -> next;
    }
}


int main(){

    Node* head = new Node;
    Node* first = new Node;
    Node* second = new Node;

    head -> value = 1;
    head -> next = first;
    first -> value = 2;
    first -> next = second;
    second -> value = 3;
    second -> next = NULL;

    // insertAtTheFront(&head, -4);
    // insertAtTheEnd(&head, 100);
    insertAfter(head, -1);
    insertAfter(first, -1);

    printList(head);

    return 0;
}