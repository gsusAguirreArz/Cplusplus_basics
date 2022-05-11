#include <iostream>

void printArray( int array[] , int n );

int main(){
    int n;
    std::cout << "Type the array size: ";
    std::cin >> n;

    int *array = new int[n];

    for ( int i = 0; i < n; i++ ){
        std::cout << "Type value at i = " << i << ": ";
        std::cin >> array[i];
    }

    std::cout << "Your array is: ";
    printArray( array, n );
    delete[] array;
    array = NULL;

    return 0;
}

void printArray( int array[] , int n ){
    std::cout << "[ ";
    for ( int i = 0; i < n; i++ ){
        if ( i == n - 1 ){
            std::cout << array[i] << " ";
            continue;
        }
        std::cout << array[i] << ", "; 
    }
    std::cout << "]" << std::endl;
}