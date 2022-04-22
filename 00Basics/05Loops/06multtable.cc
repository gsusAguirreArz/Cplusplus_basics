#include <iostream>
using namespace std;

int main(){
    // generate a mult table
    for (int i = 1; i <= 10; i++){
        for ( int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}