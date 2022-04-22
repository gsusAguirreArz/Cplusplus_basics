#include <iostream>
#define MAX_SIZE 101

using namespace std;

// array implementation

class Queue{
    public:
        int A[MAX_SIZE];
        int front = -1;
        int rear = -1;

        bool isEmpty(){
            if ( front == -1 and rear == -1 ){
                return true;
            }else{
                return false;
            }
        }

        void push(int x){
            if (rear == MAX_SIZE - 1){
                cout << "Error: Queue is full" << endl;
                return;
            }else if ( isEmpty() ){
                front = 0;
                rear = 0;
            }else{
                rear++;
            }
            A[rear] = x;
            return;
        }

        void pop(){
            if ( isEmpty() ){
                return;
            }else if ( front == rear ){
                front = -1;
                rear = -1;
            }else{
                front++;
            }
        }
};
int main(){
    Queue list1;

    list1.push(2);
    list1.push(2);
    list1.push(2);
    list1.push(2);
    list1.push(2);
    list1.push(2);
    list1.push(2);
    list1.push(2);
    list1.push(2);

    return 0;
}