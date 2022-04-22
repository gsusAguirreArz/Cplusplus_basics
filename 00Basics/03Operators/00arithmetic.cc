#include <iostream>
using namespace std;

int main(){
    // arithmetic operators 
    // binary operators
    // +, -, *, /, %

    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl; // to int numbers return a int
    cout << 5 / 2.0 << endl; // to return the fraction add the .0

    cout << 5 % 2 << endl;
    
    // unitary opoerators
    // ++, --
    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << counter++ <<endl; // it outputs post increment pre increment ++counter

    system("clear"); // use this to clear console cs for windows , clear for bash

    // relational operators
    // <, >, <=, >=, ==, !=
    int a = 5, b = 5;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;

    system("clear");

    // logical operaors
    // &&, ||, !
    b = 8;
    cout << (a == 5 && b == 5) << endl;
    cout << (a == 5 || b == 5) << endl;
    cout << !(a == 5 || b == 5) << endl;

    //Priority
    // arithmetic -> relational -> logical
    cout << (a == 5 && b == 5 + 3) << endl;

    system("clear");
    // assignment operators
    // =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7; // equivalent to x = x + 7
    cout << x << endl;

    return 0;
}