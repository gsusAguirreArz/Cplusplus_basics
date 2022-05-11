#include <iostream>

double f( double x );
double sum( double (*func) (double), int n, int m );

int main(){
    int n = 1, m = 5;

    std::cout << "\\sum_{x = 1}^{5}2x equals to: " << sum(f, n, m) << std::endl;
    return 0;
}

double f( double x ){
    return 2 * x;
}

double sum( double (*func) (double), int n, int m ){
    double result = 0;
    for ( int i = n; i <= m; i++ )
        result += func(i);
    return result;
}