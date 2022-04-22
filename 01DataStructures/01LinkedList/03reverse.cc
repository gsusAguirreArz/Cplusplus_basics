#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

void insert(Node** head, int x){
    Node* newNode = new Node();
    newNode -> value = x;
    newNode -> next = *head;
    *head = newNode;
}


void print(Node* head){
    cout << "LInked list is: \n";
    while ( head != NULL ){
        printf( " %d", head -> value);
        head = head -> next;
    }
    cout << "\n";
}

void printRecur(Node* head){
    if ( head == NULL )
        return;

    printf(" %d", head -> value);
    printRecur(head -> next);
}

void printReverseRecur(Node* head){
    if ( head == NULL ){
        return;
    }
    printReverseRecur(head -> next);
    printf(" %d", head -> value);
}

// Given a linked list how do you reverse it?

// using iterative solution
void reverseIter(Node** head){

    // Node* current_node = *head;
    // Node* previous_node = NULL;
    // Node* next_node;

    Node *current_node, *previous_node, *next_node;
    current_node = *head;
    previous_node = NULL;

    while ( current_node != NULL ){

        next_node = current_node -> next;
        current_node -> next = previous_node;

        previous_node = current_node;
        current_node = next_node;
    }
    *head = previous_node;

}

// using recursion solution
// void reverseRecu(Node* node){
//     if ( node -> next == NULL ){
//         head = node;
//         return;
//     }

//     reverseRecu( node -> next );
//     Node* aux = node -> next;
//     aux -> next = node;
//     node -> next = NULL;

// }

int main(){
    Node* head;
    head = NULL;

    insert(&head, 2);
    insert(&head, 4);
    insert(&head, 6);
    insert(&head, 8);
    print(head);
    cout << "Print in reversed mode: \n";
    printReverseRecur(head);
    reverseIter(&head);
    // head = reverseRecur(head);
    cout << "\nPrint the reversed list:  \n";
    printRecur(head);



    return 0;
}