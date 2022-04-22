#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node *next, *prev;
        Node(int x){
            this -> value = x;
            this -> next = NULL;
            this -> prev = NULL;
        }
};

class DoublyLinkedList{
    private:
        Node* head;

        Node* getNewNode(int x){
            Node* aux = new Node(x);
            aux -> next = NULL;
            aux -> prev = NULL;
            return aux;
        }

    public:
        DoublyLinkedList(){
            head = NULL;
        }

        Node* getHead(){
            return head;
        }

        void print(){
            cout << "Doubly Linked List: [";
            while ( head != NULL ){
                printf(" %d", head -> value);
                head = head -> next;
            }
            cout << " ]\n";
        }

        void revPrint(){
            Node* aux = head;

            if ( aux == NULL ){
                return;
            }

            while ( aux -> next != NULL ){
                aux = aux -> next;
            }

            cout << "Reversed Doubly Linked List: [ ";
            while ( aux != NULL ){
                cout << aux -> value << ", ";
                // printf(" %d", aux -> value);
                aux = aux -> prev;
            }
            cout << "]\n";

        }

        void front(int x){
            Node* newNode = getNewNode(x);
            if ( head == NULL ){
                head = newNode;
                return;
            }

            head -> prev = newNode;
            newNode -> next = head;
            head = newNode;
        }      
};

int main(){
    DoublyLinkedList list1;
    list1.front(1);
    list1.front(100);
    list1.front(-1);
    list1.front(222);
    list1.print();
    list1.revPrint();

    return 0;
}