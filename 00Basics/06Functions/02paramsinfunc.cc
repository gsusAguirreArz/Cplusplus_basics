#include <iostream>
using namespace std;

void introduceMe(string name, string city = "undefined", int age = 0); 

int main(){

    introduceMe("Saldina", "MOstar" , 26);
    introduceMe("Ana", "MExico", 27);
    introduceMe("Jesus");

    return 0;
}

void introduceMe(string name, string city, int age){ 
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    cout << "I am " << age << endl;
}