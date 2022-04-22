#include <iostream>

using namespace std;

// linked list
// unlike arrays stores data non continoously
// how do you access elements?? link elements
// no unused memory
// extra memory for pointer variables

// access element (average case): O(n)
// add element at front: O(1)
// add element at end: O(n)
// add element at n: O(n)
// insert elemen: O(n)
// remove element: O(n)

// HEAD| value | address (pointer adress of next element) | -> | value 2| address (next element)| -> ... ->|value|null| END
// pros: linked list have dynamic size
// cons: random access to the elements is not allowed (you dont know where your 4th element is without knoing where your head element is)
//       needs more memory!! (to store value and pointer!)
// node is an element of a linked list

// implementation!!

class Node{
    public:
        int value;
        Node* next;
};


// pass a linked list throught a function

void printList(Node* n){
    while ( n != NULL ){
        cout << n -> value << endl;
        n = n -> next;
    }
}


int main(){

    // linked list of 3 elements

    Node* head = new Node;
    Node* first = new Node;
    Node* second = new Node;

    head -> value = 1;
    head -> next = first;
    first -> value = 2;
    first -> next = second;
    second -> value = 3;
    second -> next = NULL;

    printList(head);

    return 0;
}