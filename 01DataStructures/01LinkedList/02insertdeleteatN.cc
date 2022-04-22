#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

// Insert at the front of the linked list
void insertAtFront( Node** head, int x ){

    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> next = *head;
    *head = newNode;
}

// Returning a node
// Node* insertAtFront( Node* head, int x ){
//     Node* temp = new Node();
//     temp -> data = x;
//     temp -> next = head;
//     head = temp;
//     return head;
// }

// Insert at nth position
void insertAtN( Node** head, int x, int n ){

    // we start counting after head node eg: 
    // |1|add1| -> |2|add2| -> |3|add3| -> ... -> |3829|addn|
    //    head  ->   (1)    ->    (2)   -> ... ->  (n)
    Node* newNode  = new Node();
    newNode  -> data = x;

    // if ( *head == NULL ){
    //     cout << "You have an empty linked list! \n"; 
    //     return;
    // }

    if ( n == 1 ){
        newNode  -> next = *head;
        *head = newNode ;
        return;
    }

    Node* n_minus_one_node = *head;   
    for ( int i = 0; i < n - 2; i++ ){
        n_minus_one_node = n_minus_one_node -> next; // pointer to (n-1)th node
    }
    newNode  -> next = n_minus_one_node -> next;
    n_minus_one_node -> next = newNode ;
}

// Delete a node at nth position
void deleteAtN( Node** head, int n ){ 
    // 1. Fix the links
    // 2. Free the memory

    // if there is a node before
    Node* n_minus_one_node = *head;

    if ( n == 1 ){
        *head = n_minus_one_node -> next;
        delete n_minus_one_node;
        return;
    }

    for ( int i = 0; i < n - 2; i++ ){
        n_minus_one_node = n_minus_one_node -> next; // pointer to (n-1)th node
    }

    Node*  n_node = n_minus_one_node -> next; // nth node
    n_minus_one_node -> next = n_node -> next;
    delete n_node;
    

}


void print(Node* n){
    cout << "Linked list is:  " ;
    while ( n != NULL ){
        printf( " %d", n -> data);
        // cout << n -> data << "\r";
        n = n -> next;
    }
    cout << "\n";
}


int main(){
    Node* head = new Node();
    head = NULL;

    // Insert at front

    // int n, x;
    // cout << "How many numbers?\n";
    // cin >> n;
    // for ( int i = 0; i < n; i++ ) {
    //     cout << "Enter the number \n";
    //     cin >> x;
    //     // if we dont use by reference we do: head = insertAtFront( head, x );
    //     insertAtFront( &head, x);
    //     print(head);
    // }

    // Insert at Nth position

    // insertAtN(&head, 2, 1);
    // insertAtN(&head, 3, 2);
    // insertAtN(&head, 4, 1);
    // insertAtN(&head, 5, 2);
    // print(head);

    // Delete at Nth position

    insertAtFront(&head, 1);
    insertAtFront(&head, 2);
    insertAtFront(&head, 3);
    insertAtFront(&head, 4);
    insertAtFront(&head, 5);
    print(head);
    int n;
    cout << "Enter a position: \n";
    cin >> n;
    deleteAtN(&head, n);
    print(head);


    return 0;
}