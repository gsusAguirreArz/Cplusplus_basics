#include <iostream>
using namespace std;

int main(){
    // what is going to be the result of the following lines?

    int a = 5, b = 4;
    cout << a + (b++) << endl; // ? 9
    cout << (--a) + b << endl; // ? 8 9

    cout << ! (true && false) << endl; //? 1 = true
    cout << (true && false || true) << endl; // ? 1 = true

    int x = 7;
    cout << ( ++x <= 9 && x + 2 >= 10) << endl; // ? 0 = false worng correct 1 = true

    int y = 3;
    cout << (y == y++) << endl; // ? 1 = true wrong correct 0 = false

    float z = 8;
    z += 2;
    cout << z << endl; // ? 10
    z /= 2;
    cout << z << endl; // ? 5

    return 0;

}