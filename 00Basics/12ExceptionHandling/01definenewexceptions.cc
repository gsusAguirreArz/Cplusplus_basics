#include <iostream>
#include <exception>

struct MyException:public std::exception{
    // here, what() is a poublic method provided by exception class and it has been overriden by all the child exception classes. This returns the cause of an exception.
    const char* what() const throw(){
        return "C++ Exception";
    }
};

int main(){
    try{
        throw MyException();
    } catch( MyException& e ){
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    } catch( std::exception& e ){
        // Other errors
    }
    return 0;
}