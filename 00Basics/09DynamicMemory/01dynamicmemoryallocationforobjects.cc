#include <iostream>

class Box{
    public:
        Box(){
            std::cout << "Constructor called!" << std::endl;
        }

        ~Box(){
            std::cout << "Destructor called!" << std::endl;
        }
};

int main(void){
    Box* myBoxArray = new Box[4];
    delete[] myBoxArray;
    myBoxArray = NULL;
    return 0;
}