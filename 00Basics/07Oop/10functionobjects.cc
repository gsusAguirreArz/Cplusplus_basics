#include <iostream>
#include <functional>


class classf {
    public:
        classf(){}

        double operator()( double x ){
            return 2 * x;
        }
};

// above code can be implemented with run without () overloading.
class classf2 {
    public:
        classf2(){}

        double run( double x ){
            return 2 * x;
        }
};

// how to do sum(-, 2, 5)
template<class T>
struct negate: public std::unary_function<T,T>{
    T operator()( const T& x ) const {
        return -x;
    }
};



double sum2( classf f, int n, int m );
double sum3( classf2 f, int n, int m );
template<class F>
double sum4( F f, int n, int m );


int main(){
    classf cf;
    std::cout << sum2( cf, 2, 5) << std::endl;

    // simply
    std::cout << sum2( classf(), 2, 5) << std::endl;

    // using classf2
    std::cout << sum3( classf2(), 2, 5) << std::endl;

    // getting sum(-,2,5)
    std::cout << sum4( negate<double>(), 2, 5) << std::endl;
    
    return 0;
}


double sum2( classf f, int n, int m ){
    double res = 0;
    for ( int i = n; i <= m; i++ )
        res += f(i);
    return res;
}

double sum3( classf2 f, int n, int m ){
    double res = 0;
    for ( int i = n; i <= m; i++ )
        res += f.run(i);
    return res;
}

template<class F>
double sum4( F f, int n, int m ){
    double res = 0;
    for ( int i = n; i <= m; i++ )
        res += f(i);
    return res;
}