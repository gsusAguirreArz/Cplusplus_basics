#include <iostream>

int naiveFactorial( int n );
int factorial( int n );

int main(){
    int n;
    std::cout << "Type an integer: ";
    std::cin >> n;

    std::cout << n << "! = " << naiveFactorial(n) << std::endl;
    std::cout << n << "! = " << factorial(n) << std::endl;
    return 0;
}

// naive implementation
int naiveFactorial( int n ){
    int acum = 1;
    for ( int i = n; i > 0; i-- ){
        acum *= i;
    }
    return acum;
}

// recursive implementation
int factorial( int n ){
    if ( n == 0 ) return 1;
    else {
        return n * factorial( n - 1 );
    }
}