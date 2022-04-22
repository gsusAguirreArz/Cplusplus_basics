#include <iostream>
#include <queue>

using namespace std;

// Queue
// A queue es a FIFO dta structure First In First Out
// when do we use it?
// when we need things to happen in the exact order they are called
// shared resource but can only serve one aat a time printer 

// a list or collection with the restriction that insertion can be performed at one end (rear) and deletion caan be performed at other end (front)

// mehtods all methos must take O(1)
// enqueue() ~ push()
// dequeue() ~ pop()
// front() ~ peek()
// isempty()

void printQueue(queue<int> queue){
    while ( !queue.empty() ){
        cout << queue.front() << endl;
        queue.pop();
    }


}

int main(){

    // push (add element at the end of the queue), pop (remove an element of the front of the queue), size , front (give first element), back (get last  element)

    queue<int>myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "First element of myQueue: " << myQueue.front() << endl;
    cout << "Last element of myQueue: " << myQueue.back() << endl;
    cout << "Size of myQueue: " << myQueue.size() << endl;

    cout << "My queue: " << endl;
    printQueue(myQueue);

    return 0;
}