#include <iostream>

// in tmepaltes class and typename are interchangable
template <class genType>
void swap( genType& el1, genType& el2);


int main(){
    int a = 2, b = 3;
    std::cout << "Integer parameters..." << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b);
    std::cout << "a = " << a << ", b = " << b << "\n" << std::endl;

    float c = 5.0, d = 13.0;
    std::cout << "Float parameters..." << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    swap(c,d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    return 0;
}


template <class genType>
void swap( genType& el1, genType& el2 ){
    std::cout << "Swapping..." << std::endl;
    genType tmp = el1; el1 = el2; el2 = tmp;
    return;
}