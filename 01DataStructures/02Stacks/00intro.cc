#include <iostream>
#include <stack>

using namespace std;

// STACKS data structure
// LIFO techniche last in first out (FILO first in last out)

// write out the elements of the stack

// operations  all in O(1)
// push()
// pop()
// top()
// isempty()

// applications
// - function calls/ recurssion
// - undo operations
// - balanced parentheses at compiler


void printStackElements(stack<int> stack){
    while ( !stack.empty() ){
        cout<< stack.top() << endl;
        stack.pop();
    }
}

int main(){

    // empty, size, push, pop, top
    stack<int>numbersStack;

    if ( numbersStack.empty() ){
        cout << "stack is empty" << endl;
    }else{

        cout << "stack is not empty" << endl;
    }

    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.push(4);
    numbersStack.push(5);
    numbersStack.pop();
    
    cout << "stack size is " << numbersStack.size() << endl;

    printStackElements(numbersStack);


    return 0;
}