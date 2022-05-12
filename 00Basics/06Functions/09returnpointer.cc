#include <iostream>
#include <cmath>
#include <ctime>

int *getRandom();

int main(){
    int *p;

    p = getRandom();

    for ( int i = 0; i < 10; i++ ){
        std::cout << "*(p + " << i << ") : ";
        std::cout << *(p+i) << std::endl;
    }
    
    return 0;
}

int *getRandom(){
    static int r[10];

    std::srand( (unsigned)std::time(NULL) );

    for ( int i = 0; i < 10; i++ ){
        r[i] = std::rand();
        std::cout << r[i] << std::endl;
    }

    return r;
}