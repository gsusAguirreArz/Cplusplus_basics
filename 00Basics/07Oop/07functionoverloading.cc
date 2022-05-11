#include <iostream>
#include <string>

class printData{
    public:
        void print( int i ){
            std::cout << "Printing int: " << i << std::endl;
        }
        void print( double f ){
            std::cout << "Printing float: " << f << std::endl;
        }
        void print( std::string string ){
            std::cout << "Printing character: " << string << std::endl;
        }
};

int main(void){
    printData pd;
    
    // Call print to print integer
    pd.print(5);

    // Call print to print float
    pd.print(500.263);

    // Call print to print character
    pd.print("Hello C++");
    return 0;
}