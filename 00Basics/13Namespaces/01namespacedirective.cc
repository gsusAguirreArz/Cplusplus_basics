#include <iostream>

using std::cout;
// first name space
namespace first_space{
    void func(){
        cout << "Inside first_space" << std::endl;
    }
}

// second name space
namespace second_space{
    void func(){
        cout << "Inside second_space" << std::endl;
    }
}

using namespace first_space;

int main(void){
    func();

    return 0;
}