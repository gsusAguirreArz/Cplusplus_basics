#include "Node.h"
#include "DoublyLinkedList.h"
#include <iostream>
DoublyLinkedList::DoublyLinkedList(int value){
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}
DoublyLinkedList::~DoublyLinkedList(){
    Node* tmp = head;
    while (tmp){
        head = head->next;
        delete tmp;
        tmp = head;
    }
}
Node* DoublyLinkedList::get(int idx){
    if (idx < 0 || idx > length) return nullptr;
    Node *tmp=head;
    if (idx<length/2){
        for (int i=0; i<idx; i++){
            tmp=tmp->next;
        }
    }else{
        tmp=tail;
        for (int i=length-1; i>idx; i--){
            tmp=tmp->prev;
        }
    }
    return tmp;
}
bool DoublyLinkedList::set(int idx, int val){
    Node *tmp=get(idx);
    if (tmp){
        tmp->value=val;
        return true;
    }
    return false;

}
// Node insertion
void DoublyLinkedList::prepend(int val){
    Node *newNode = new Node(val);
    if (length==0){
        head = newNode;
        tail = newNode;
    }else{
        head->prev=newNode;
        newNode->next=head;
        head=newNode;        
    }
    length++;
    return;
}
bool DoublyLinkedList::insert(int idx, int val){
    if (idx<0||idx>length) return false;
    if (idx==0){
        prepend(val); 
        return true;
    }
    if (idx==length-1){ 
        append(val);
        return true;
    }

    Node *newNode = new Node(val);
    Node *before = get(idx-1); 
    Node *after=before->next;

    newNode->next=after;
    newNode->prev=before;
    after->prev=newNode;
    before->next=newNode;
    length++;
    return true;
}
void DoublyLinkedList::append(int val){
    Node *newNode = new Node(val);
    if (length==0){
        head = newNode;
        tail = newNode;
    }else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    length++;
    return;
}
// Node deletion
void DoublyLinkedList::deleteFirst(){
    if (length==0) return;
    Node *tmp=head;
    if (length==1){
        head=nullptr;
        tail=nullptr;
    }else{
        head=head->next;
        head->prev=nullptr;
    }
    delete tmp;
    length--;
    return;
}
void DoublyLinkedList::deleteNode(int idx){
    if (idx<0||idx>length) return;
    if (idx==0) return deleteFirst();
    if (idx==length-1) return deleteLast();

    Node *tmp=get(idx);

    tmp->prev->next=tmp->next;
    tmp->next->prev=tmp->prev;
    delete tmp;
    length--;
    return;
}
void DoublyLinkedList::deleteLast(){
    if (length==0) return;
    Node *tmp=tail;
    if (length==1){
        head=nullptr;
        tail=nullptr;
    }else{
        tail=tail->prev;
        tail->next=nullptr;
    }
    delete tmp;
    length--;
    return;

}
void DoublyLinkedList::printList(){
    Node* tmp = head;
    std::cout << "DLL: { " ;
    int i = 0;
    while (tmp){
        if (i==0){
            std::cout << "<-[";
        }else{
            std::cout << ">[";
        }
        std::cout << tmp->value;
        if (i==length-1){
            std::cout << "]->";
        }else{
            std::cout << "]<=";
        }
        tmp = tmp->next;
        i++;
    }
    std::cout << " }" << std::endl ;
}
Node* DoublyLinkedList::getHead(){
    return head;
}
Node* DoublyLinkedList::getTail(){
    return tail;
}
int DoublyLinkedList::getLength(){
    return length;
}
