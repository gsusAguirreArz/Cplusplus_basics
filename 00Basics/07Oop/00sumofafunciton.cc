#include <iostream>

class Func{
    public:
        Func(){}
        double operator() (double x){
            return 2*x;
        }
};

double sum( Func f, int n, int m );
int main(){
    Func func;
    int a = 2, b = 5;
    std::cout << "The sum of 2x over [2,5] is: ";
    std::cout << sum( func, a, b) << std::endl;
    std::cout << sum( Func(), a, b) << std::endl;
}

double sum( Func f, int n, int m ){
    double res = 0;
    for ( int i = n; i <= m; i ++ ){
        res += f(i);
    }
    return res;
}