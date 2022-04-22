#include <iostream>

class Node{
    public:
        int value;
        Node* next;

        Node(int x){
            this -> value = x;
            next = NULL;
        }
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(){
            head = NULL;
        }

        Node* getHead(){
            return head;
        }

        void print(){
            Node* aux = head;
            std::cout << "Linked list: [ ";
            while ( aux != NULL ){
                std::cout << aux -> value << ", ";
                aux = aux -> next;
            }
            std::cout << "]\n";
        }

        void revPrint(Node* node){
            if ( node == NULL ){
                return;
            }

            revPrint( node -> next );
            printf(" %d", node -> value);
        }

        void front(int x){
            Node* newNode = new Node(x);
            newNode -> next = head;
            head = newNode;
        }

        void back(int x){
            Node* newNode = new Node(x);
            newNode -> next = NULL;

            if ( head == NULL ){
                head = newNode;
                return;
            }

            Node* last = head;
            while ( last -> next != NULL ){
                last = last -> next;
            }
            last -> next = newNode;
        }

        void at(int x, int n){
            Node* newNode = new Node(x);

            if ( n == 1 ){
                newNode -> next = head;
                head = newNode;
                return;
            }

            Node* n_minus_one = head;
            for ( int i = 0; i < n - 2; i++ ){
                n_minus_one = n_minus_one -> next;
            }

            newNode -> next = n_minus_one -> next;
            n_minus_one -> next = newNode;
        }

        void del(int n){
            Node* n_minus_one = head;

            if ( n == 1 ){
                head = n_minus_one -> next;
                delete n_minus_one;
                return;
            }

            for ( int i = 0; i < n - 2; i++ ){
                n_minus_one = n_minus_one -> next;
            }

            Node* n_node = n_minus_one -> next;
            n_minus_one -> next = n_node -> next;
            delete n_node;
        }

        void reverse(){
            Node *curr, *prev, *next;
            curr = head;
            prev = NULL;

            while ( curr != NULL ){
                next = curr -> next;
                curr -> next = prev;

                prev = curr;
                curr = next;
            }
            head = prev;
        }

        Node* revRec(Node* node){
            if ( node == NULL ){
                return NULL;
            }
            if ( node -> next == NULL ){
                head = node;
                return node;
            }

            Node* aux = revRec(node -> next );
            aux -> next = node;
            node -> next = NULL;
            return node;
        }
};

int main(){
    LinkedList list1;

    list1.front(20);
    list1.front(4);
    list1.front(15);
    list1.front(85);
    list1.print();
    list1.back(105);
    list1.print();
    list1.at( 203, 3);
    list1.print();
    list1.del(3);
    list1.print();
    list1.reverse();
    list1.print();

    Node* list1head = list1.getHead();
    list1.revRec(list1head);
    list1.print();

    return 0;
}