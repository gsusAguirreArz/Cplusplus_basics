#include "Node.h"
#include "LinkedList.h"
#include <iostream>
LinkedList::LinkedList(int value){
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}
LinkedList::~LinkedList(){
    Node* tmp = head;
    while (tmp){
        head = head->next;
        delete tmp;
        tmp = head;
    }
}
Node* LinkedList::get(int index){
    if (index < 0 || index >= length) return nullptr;
    Node* tmp = head;
    for (int i = 0; i < index; i++){
        tmp = tmp->next;
    }
    return tmp;
}
bool LinkedList::set(int index, int value){
    Node* tmp = get(index);
    if (tmp){
        tmp->value=value;
        return true;
    }
    return false;
}
// Node insertion
void LinkedList::prepend(int value){
    Node* newNode= new Node(value);
    if ( length == 0){
        head = newNode;
        tail = newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
    length++;
    return;
}
bool LinkedList::insert( int index, int value ){
    if ( index < 0 || index > length ) return false;
    if ( index == 0 ) {
        prepend(value);
        return true;
    }
    if ( index == length ){
        append(value);
        return true;
    }
    Node* newNode = new Node(value);
    Node* tmp = get(index - 1);
    newNode->next = tmp->next;
    tmp->next = newNode;
    length++;
    return true;
}
void LinkedList::append(int value){
    Node* newNode = new Node(value);
    if (length == 0){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
    length++;
    return;
}
// Node deletion
void LinkedList::deleteFirst(){
    if (length == 0) return;
    Node* tmp = head;
    if (length == 1){
        head = nullptr;
        tail = nullptr;
    }else{
        head = head->next;
    }
    delete tmp;
    length--;
    return;
}
void LinkedList::deleteNode(int index){
    if ( index < 0 || index >= length ) return;
    if ( index == 0 ) return deleteFirst();
    if ( index == length - 1 ) return deleteLast();

    Node* prev = get(index - 1);
    Node* tmp = prev->next;

    prev->next = tmp->next;
    delete tmp;
    length--;
    return;
}
void LinkedList::deleteLast(){
    if (length == 0) return;
    Node* tmp = head;
    if (length == 1){
        head = nullptr;
        tail = nullptr;
    }else{
        Node* pre = head;
        while (tmp->next){
            pre = tmp;
            tmp = tmp->next;
        }
        tail = pre;
        tail->next=nullptr;
    }
    delete tmp;
    length--;
    return;
}
// LL info
void LinkedList::printList(){
    Node* tmp = head;
    std::cout << "LL: { " ;
    int i = 0;
    while (tmp){
        std::cout << "[" << tmp -> value << "]->";
        tmp = tmp->next;
        i++;
    }
    std::cout << " }" << std::endl ;
}
Node* LinkedList::getHead(){
    return head;
}
Node* LinkedList::getTail(){
    return tail;
}
int LinkedList::getLength(){
    return length;
}
// Misc ll ops
void LinkedList::reverse(){
    Node* tmp = head;
    head = tail;
    tail = tmp;

    Node* after = tmp->next;
    Node* before = nullptr;

    for ( int i = 0; i < length; i++ ){
        after = tmp->next;
        tmp->next = before;
        before = tmp;
        tmp = after;
    }
    return;
}
