#include <iostream>
using namespace std;

int main(){
    // user enters integer number
    // program write out if that number is even or odd
    int n;

    cout << "Type an integer number: " << endl;
    cin >> n;

    if ( n % 2 == 0 ) {
        cout << "Your number is even." << endl;
    }else{
        cout << "Your number is odd." << endl;
    }
    
    return 0;
}