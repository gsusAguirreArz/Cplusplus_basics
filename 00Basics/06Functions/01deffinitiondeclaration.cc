#include <iostream>
using namespace std;

// declaration of funcitons with all their parameterrs
void function();

int main(){
    cout << "Hello from main()" << endl;
    function();
    return 0;
}

// definition of fcuntion()
void function(){ 
    cout << "Hello from function()" << endl;
}