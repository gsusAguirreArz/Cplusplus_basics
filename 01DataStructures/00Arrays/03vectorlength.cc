#include <iostream>

int length( int vector[] );

int main(){
    int vector[3] = {1,2,3};

    std::cout << length(vector) << std::endl;
    return 0;
}

int length( int vector[] ){
    int sum = 0;
    for ( int i = 0; i < 3; i++ ){
        int power = vector[i] * vector[i];
        sum += power;
    }
    return sum;
}