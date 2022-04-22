#include <iostream>
using namespace std;

int main(){
    // factorial of a number
    int n, factorial = 1;
    cout << "Number: " << endl;
    cin >> n;

    // for ( int i = 1; i <= n; i++ ){
    //     factorial *= i;
    // }

    for ( int i = n;  i >= 1; i--){
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    cout << n << "!=" << factorial << endl;

    return 0;
}