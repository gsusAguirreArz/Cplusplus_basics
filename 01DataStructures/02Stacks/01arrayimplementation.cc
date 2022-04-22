#include <iostream>
#define MAX_SIZE 101

using namespace std;

// using arrays

class Stack{
    public:
        int A[MAX_SIZE];
        int top = -1;

        void push(int x){
            if ( top == MAX_SIZE - 1 ){
                cout << "Error: stack overflow" << endl;
                return;
            }
            // top++;
            // A[top] = x;
            A[++top] = x;
        }

        void pop(){
            if ( top == -1 ){
                cout << "Error: No element to pop" << endl;
                return;
            }
            top--;
        }

        int Top(){
            return A[top];
        }

        bool isEmpty(){
            return top == -1 ? true : false;
        }

        void print(){
            cout << "Stack: [ ";
            for ( int i = 0; i <= top; i++ ){
                cout << A[i] << ", ";
            }
            cout << "]\n";
        }
        
};

int main(){

    Stack list1;
    list1.isEmpty(); list1.print();
    list1.push(2); list1.print();
    list1.push(5); list1.print();
    list1.push(10); list1.print();
    list1.pop(); list1.print();
    list1.push(12); list1.print();
    return 0;
}