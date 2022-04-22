#include <iostream>
using namespace std;

// pointers are similar to a variable (stores certain value)  a pointer is a container too but it stores address (a memory lcoation)

// they have to be of the same type as the variable they are pointing to

// - pass values by reference to functions
// - return multiple values from a function
// - dynamic memory allocation
// - smart pointers

int main(){
    int n = 5;
    cout << n << endl;

    // get their memory address put & before variable
    cout << &n << endl;

    // create a pointer that its going to hold the addres
    int* ptr = &n;
    cout << ptr << endl;

    // dereferencing
    cout << *ptr << endl;

    // mutating pointer
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    return 0;
}