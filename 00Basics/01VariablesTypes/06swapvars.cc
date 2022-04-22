#include <iostream>
using namespace std;

// int main(){
//     // program tfor swapping values of two varioables
//     int a = 20, b = 10;

//     int temp = a;

//     a = b;
//     b = temp;

//     cout << "a = " << a << " b = " << b <<endl;

//     return 0;
// }

// without using a third variable
int main(){
    // swap variables without using third variable
    int a = 20, b = 10;

    a += b; // 30
    b = a - b; // 20
    a = a - b; // 10

    cout << "a = " << a << " b = " << b <<endl;

    return 0;
}