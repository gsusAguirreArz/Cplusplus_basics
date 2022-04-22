#include <iostream>
using namespace std;


// int main(){

//     // program to find if a number is prime or not
//     int n;
//     cout << "Number: " << endl;
//     cin >> n;

//     bool isPrimeFlag = true;

//     for ( int i = 2; i < n; i++ ){
//         if ( n % i == 0 ){
//             isPrimeFlag = false;
//             break;
//         }
//     }

//     (isPrimeFlag) ? cout << "Prime" << endl : cout << "Not prime" << endl;

//     return 0;
// }

// refacctorign using functions

bool isPrimeNumber(int n);

int main(){

    // program to find if a number is prime or not
    int n;
    cout << "Number: " << endl;
    cin >> n;

    bool isPrimeFlag = isPrimeNumber(n);

    (isPrimeFlag) ? cout << "Prime" << endl : cout << "Not prime" << endl;

    // check a series of numbers
    for ( int i = 1; i <= 50; i++ ){
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << " is prime number" << endl;
    }

    return 0;
}

bool isPrimeNumber(int n = 1){
    // bool isPrimeFlag = true;

    for ( int i = 2; i < n; i++ ){
        if ( n % i == 0 ){
            return false;
        }
    }

    return true;

}