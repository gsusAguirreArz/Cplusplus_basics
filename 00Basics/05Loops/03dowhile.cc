#include <iostream>
using namespace std;

int main(){
    // pin validation
    int usersPin = 1234, pin, errorCounter=0;

    do {
        cout << "PIN: " << endl;
        cin >> pin;
        if (pin != usersPin)
            errorCounter++;
    } while ( errorCounter < 3 && pin != usersPin);

    if (errorCounter < 3)
        cout << "Loading..." << endl;
    else
        cout << "Blocked!" << endl;

    return 0;
}