#include <iostream>
using namespace std;

int main(){

    // reversing a number
    int number, reversedNumber = 0;
    cout << "Number: " << endl;
    cin >> number; // 123
    
    while ( number != 0) {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }

    cout << "reversed: " << reversedNumber << endl;

    return 0;
}