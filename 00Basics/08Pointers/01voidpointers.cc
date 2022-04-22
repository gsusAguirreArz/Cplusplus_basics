#include <iostream>

using namespace std;

// void pointer hold the address of any other dtype
// you cannot directly de reference a void pointer

void printNumber(int* numberPtr){
    cout << *numberPtr << endl;
}
void printLetter(char* charPtr){
    cout << *charPtr << endl;
}

// using void pointer
// be very carefull while using a void pointer!
void print(void* ptr, char type){
    switch (type)
    {
        case 'i': // handle int*
            cout << *((int*)ptr) << endl;
            break;
        case 'c': // handle char*
            cout << *((char*)ptr) << endl;
            break;
        default:
            break;
    }
}

int main(){

    int n = 5;
    char letter = 'a';
    // printNumber(&n);
    // printLetter(&letter);

    print(&n, 'i');
    print(&letter, 'c');

    return 0;
}