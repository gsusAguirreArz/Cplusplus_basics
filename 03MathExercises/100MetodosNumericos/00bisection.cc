#include <iostream>
#include <cmath>

float func( float x );
float findRoot( float (*function) (float), float a, float b, float epsilon );

int main(){
    std::cout << "The root of x^2 - 2 is: ";
    std::cout << findRoot(func, 0, 4, 0.001) << std::endl;
    return 0;
}

float func( float x ){
    return std::pow(x,2) - 2;
}

float findRoot( float (*function) (float), float a, float b, float epsilon ){
    float middle = (a + b) / 2;
    while ( function(middle) != 0 && std::abs( b - a ) > epsilon ){
        if ( function(a) * function(middle) < 0 ) b = middle;
        else a = middle;
        middle = (a + b) / 2;
    }
    return middle;
}