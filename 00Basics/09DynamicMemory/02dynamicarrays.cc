#include <iostream>

using namespace std;

int main(){

    // disadvantages of fized arrays
    // array stores elements in continous memory (one after the other in memory)
    // accessing that data will be very fast!!
    // accessing data on linked lists is slower!!
    // what happens when you want to insert or delete an element on an array?? without disrupting memory
    // size of the arrya have to be constant!!!

    // new allocates memory
    // delete deallocates memory

    // int myArray[5]; // fixed array

    int size;
    cout << "Size: " << endl;
    cin >> size;

    int* myArray = new int[size]; //allocated an array of size size

    for ( int i = 0; i < size; i++ ){
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for ( int i = 0; i < size; i++ ){
        // cout << myArray[i] << " ";
        cout << *(myArray+i) << " ";
    }

    // each time you use ne u use delete
    delete[]myArray;
    myArray = NULL; // good practice

}