#include <iostream>
#include <cmath>


template <class paramType, class errType>
float sqrtMethodOne( paramType x, errType epsilon = 0.001, bool info = false );
template <class paramType, class errType>
float sqrtMethodTwo( paramType x, errType epsilon = 0.1, bool info = false );
template <class paramType>
float abs( paramType x );


int main(){
    float x, epsilon;
    std::cout << "Type a number: ";
    std::cin >> x;

    std::cout << "Sqrt using std::sqrt(x) = " << std::sqrt(x) << "\n" << std::endl;
    float sol =  sqrtMethodOne(x, 0.0001, true);
    std::cout << "Sqrt usgin sqrtMethodOne(x) = " << sol << "\n" << std::endl;
    sol =  sqrtMethodTwo(x, 0.01, true);
    std::cout << "Sqrt usgin sqrtMethodTwo(x) = " << sol << std::endl;
    return 0;
}


template <class paramType, class errType>
float sqrtMethodOne( paramType x, errType epsilon, bool info ){
    float lower_bound = 0.0, upper_bound = x, guess;
    guess = ( upper_bound - lower_bound ) / 2;
    int n_ops = 0;

    while ( abs( guess * guess - x ) > epsilon ){
        if ( guess * guess > x ) upper_bound = guess;
        else lower_bound = guess;
        guess = lower_bound + ( upper_bound - lower_bound ) / 2;
        n_ops++;
    }

    if ( info ) std::cout << "Total iterations: " << n_ops << std::endl;
    
    return guess;
}

template <class paramType, class errType>
float sqrtMethodTwo( paramType x, errType epsilon, bool info ){
    float guess = 0.0, aument = epsilon / 2;
    int n_ops = 0;

    while ( abs( guess * guess - x ) > epsilon ) {
        if ( guess * guess == x ) break;
        else guess += aument;
        n_ops++;
    }

    if ( info ) std::cout << "Total iterations: " << n_ops << std::endl;

    return guess;
} 

template <class paramType>
float abs( paramType x ){
    return x < 0  ? -x : x;
}