#include <iostream>


int main(){

    // // Not using a pointer
    // int num1=11;
    // int num2 = num1;

    // num1 = 22;

    // Using a pointer
    int* num1 = new int(11);
    int* num2 = num1;

    *num1 = 22;

    std::cout << "num1 = " << *num1 << std::endl;
    std::cout << "num2 = " << *num2 << std::endl;

    // Using a pointer


}