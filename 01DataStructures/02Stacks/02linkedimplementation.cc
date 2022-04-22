#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int x){
            this -> value = x;
            next = NULL;
        }
};

class Stack{
    private:
        Node* top;

        Node* getNewNode(int x){
            Node* aux = new Node(x);
            aux -> next = NULL;
            return aux;
        }
    
    public:
        Stack(){
            top = NULL;
        }

        void push(int x){
            // Node* newNode = getNewNode(x);
            Node* newNode = new Node(x);
            newNode -> next = top;
            top = newNode;
        }

        void pop(){
            Node* aux;
            if ( top == NULL ){
                return;
            }

            aux = top;
            top = top -> next;
            delete aux;
        }

        void Top(){
            cout << top -> value << endl;
        }

        bool isEmpty(){
            return top == NULL ? true : false;
        }

        void print(){

            Node* aux = top;

            cout << "Stack: [ ";
            while ( aux != NULL ){
                cout << aux -> value << ", ";
                aux = aux -> next;
            }
            cout << "]\n";
        }
};

int main(){
    Stack list1;
    cout<< list1.isEmpty()<< endl; list1.print();
    list1.push(2); list1.print();
    list1.push(5); list1.print();
    list1.push(10); list1.print();
    list1.pop(); list1.print();
    list1.push(12); list1.print();
    return 0;
}