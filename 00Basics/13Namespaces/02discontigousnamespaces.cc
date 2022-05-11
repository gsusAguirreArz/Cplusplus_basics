#include <iostream>

namespace first_space{
    void func(){
        std::cout << "Inside first_space" << std::endl;
    }

    namespace second_space{
        void func(){
            std::cout << "Inside scond_space" << std::endl;
        }
    }
}

using namespace first_space::second_space;

int main(){
    func();
    return 0;
}