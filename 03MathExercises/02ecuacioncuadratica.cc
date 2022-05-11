#include <iostream>
#include <cmath>
#include <complex>

void solver( float c1, float c2, float c3 );

int main(){
    float coefficients[3];
    std::cout << "Given a quadratic equation: c1*x^2 + c2*x + c3 = 0" << std::endl;
    std::cout << "Type the coeficients c1 c2 and c3 separated by a single space: ";
    for ( int i = 0; i < 3; i++ ){
        std::cin >> coefficients[i];
    }

    float a, b, c;
    a = coefficients[0];
    b = coefficients[1];
    c = coefficients[2];

    solver(a,b,c);
    return 0;
}

void solver( float c1, float c2, float c3 ){
    float delta;
    delta = c2*c2 - 4*c1*c3;

    if ( delta == 0 ){
        float x_sol;
        x_sol = -c2 / (2 * c1);
        std::cout << "Unique solution: " << x_sol << std::endl;

    } else if ( delta > 0 ){
        float x1, x2;
        x1 = ( -c2 + std::sqrt(delta) ) / (2 * c1);
        x2 = ( -c2 - std::sqrt(delta) ) / (2 * c1);
        std::cout << "x1: " << x1 << std::endl;
        std::cout << "x2: " << x2 << std::endl;

    } else if ( delta < 0 ){
        float x1r, x1i, x2r, x2i;
        x1r = -c2 / (2 * c1);
        x1i = std::sqrt(-delta) / (2 * c1);
        x2r = -c2 / (2 * c1);
        x2i = -std::sqrt(-delta) / (2 * c1);

        std::complex<double> x1(x1r,x1i), x2(x2r, x2i);

        std::cout << "x1: " << std::real(x1) << " + " << std::imag(x1) << " j" << std::endl;
        std::cout << "x2: " << std::real(x2) << " + " << std::imag(x2) << " j" << std::endl;
    }
    return;
}