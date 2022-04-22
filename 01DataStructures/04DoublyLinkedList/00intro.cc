#include <iostream>

using namespace std;

// Doubly linked list
// each node has two links, one to the previous an one to the next node
// |prev_add|value|next_add|
// we use estra memory!!

class Node{
    public:
        int value;
        Node *next, *previous;
        Node(int x){
            this -> value = x;
            next = NULL;
            previous = NULL;
        }
};

void print(Node* head){
    while ( head != NULL ){
        cout << head -> value << endl;
        head = head -> next;
    }
}

int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);

    head -> next = first;
    first -> previous = head;
    first -> next = second;
    second -> previous = first;

    print(head);

    return 0;
}