#include <iostream>

int main(){
    std::cout << "1-D array " << std::endl;
    int array[] = {1,2,3};

    for ( int value : array ){
        std::cout << value << std::endl;
    }

    std::cout << "2-D array" << std::endl;
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for ( int i = 0; i < 3; i++ ){
        for ( int j = 0; j < 3; j++ ){
            std:: cout << matrix[i][j] << std::endl;
        }
    }

}