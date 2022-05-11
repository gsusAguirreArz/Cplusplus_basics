#include <iostream>
#include <iomanip>

void printOneMinusOne( int n );

int main(){
    int n;
    std::cout << "Type the value of n: ";
    std::cin >> n;

    printOneMinusOne(n);
    return 0;
}

void printOneMinusOne( int n ){
    int value = 1;
    for ( int i = 0; i < n; i++ ){
        std::cout << std::setw(5) << value << std::endl;
        value *= -1;
    }
}