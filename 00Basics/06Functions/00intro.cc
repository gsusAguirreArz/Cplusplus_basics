#include <iostream>
using namespace std;

// first define the funcitons then the main ( top bottom execution! )

void function(){ // void do not returns anything, and do not recibe any parameters
    cout << "Hello from function()" << endl;

}

int main(){
    cout << "Hello from main()" << endl;
    function();
    return 0;
}