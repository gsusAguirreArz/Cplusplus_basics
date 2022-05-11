#include <iostream>

// first name space
namespace first_space{
    void func(){
        std::cout << "Inside first_space" << std::endl;
    }
}

// second name space
namespace second_space{
    void func(){
        std::cout << "Inside second_space" << std::endl;
    }
}

int main(void){
    first_space::func();

    second_space::func();
    return 0;
}