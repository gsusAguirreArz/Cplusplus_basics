#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

// IQ1: Swap First and Last
// Implement a member function called swapFirstLast() that swaps the values of the first and last nodes in the list.If the length of the list is less than 2, the function should not perform any operation.Input:The function is a member of the DoublyLinkedList class, which has a head and a tail pointer, as well as a length attribute.
void swapFirstLast(DoublyLinkedList* DLL){
    if (DLL->getLength() < 2) return;
    int headVal = DLL->getHead()->value;
    DLL->getHead()->value = DLL->getTail()->value;
    DLL->getTail()->value=headVal;
    return;
}
// IQ2: Reverse
// Implement a member function called reverse() that reverses the order of the nodes in the list.Input: The function is a member of the DoublyLinkedList class, which has a head and a tail pointer, as well as a length attribute.
void reverse(DoublyLinkedList* DLL){
    
}
int main(){

    DoublyLinkedList list(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.printList();

    swapFirstLast(&list);
    list.printList();

}