#include "Node.h"
#include "DoublyLinkedList.h"
#include <iostream>

int main(){
    DoublyLinkedList myDll(1);

    myDll.printList();
    myDll.append(2);
    myDll.printList();
    myDll.deleteLast();
    myDll.printList();
    myDll.append(2);
    myDll.prepend(0);
    myDll.printList();
    myDll.prepend(123);
    myDll.printList();
    myDll.deleteFirst();
    myDll.printList();
    myDll.prepend(123);
    myDll.printList();
    std::cout<<"Value of node with position 3: " << myDll.get(3)->value << std::endl;

    myDll.insert(2,100);
    myDll.printList();

    myDll.deleteNode(2);
    myDll.printList();
}