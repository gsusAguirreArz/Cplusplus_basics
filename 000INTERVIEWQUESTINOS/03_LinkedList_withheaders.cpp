#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main(){
    std::cout << "\nCreated Linked List\n";
    LinkedList* myLinkedList = new LinkedList(1);

    std::cout << "Head value: " << myLinkedList->getHead()->value << std::endl;

    std::cout << "\nAppend 2 to LL\n";
    myLinkedList->append(2);

    std::cout << "Tail value: " << myLinkedList->getTail()->value << std::endl;

    std::cout << "LL Length: " << myLinkedList->getLength() << std::endl;

    std::cout << "\nPrint LL\n";
    myLinkedList->printList();

    std::cout << "\nPrepend 0 to LL\n";
    myLinkedList->prepend(0);
    myLinkedList->printList();

    std::cout << "\nDelete Last\n";
    myLinkedList->deleteLast();
    myLinkedList->printList();

    std::cout << "\nDelete First\n";
    myLinkedList->deleteFirst();
    myLinkedList->printList();

    std::cout << "\nApend 123\n";
    myLinkedList->append(123);
    myLinkedList->printList();

    std::cout << "Print LL node 1 value: " << myLinkedList->get(1)->value << std::endl;

    std::cout << "\nChange value of Node with index 1 to 4\n";
    myLinkedList->set(1,4);
    myLinkedList->printList();

    std::cout << "\nInsert on index 1 node with value 2\n";
    myLinkedList->insert(1,2);
    myLinkedList->printList();

    std::cout << "\nDelete node with index 1\n";
    myLinkedList->deleteNode(1);
    myLinkedList->printList();

    std::cout << "\nReverse the whole LL\n";
    myLinkedList->reverse();
    myLinkedList->printList();

    delete myLinkedList;
}