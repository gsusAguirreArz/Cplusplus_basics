#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node( int x){
            this -> value = x;
            next = NULL;
        }
};

void stringReverse(Node* head, char *C, int n){
    stack <Node*> S;
    Node* aux = head;
    if ( aux == NULL ){
        return;
    }
    while ( aux != NULL ){
        S.push(aux);
        aux = aux -> next;
    }

    aux = S.top();
    head = aux;
    S.pop();
    while (!S.empty()){
        aux -> next = S.top();
        S.pop();
        aux = aux -> next;
    }
    aux -> next = NULL;
}

int main(){

    Node* head;
    head = NULL;

    char C[51];
    cout << "Enter a string: \n";
    cin >> C;
    stringReverse(head, C, strlen(C) );
    cout << "Output: " << C << endl;
    return 0;
}