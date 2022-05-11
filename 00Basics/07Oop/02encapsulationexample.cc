#include <iostream>

class Adder{
    public:
        Adder( int i = 0){
            total = i;
        }

        void addNum( int number ){
            total += number;
        }

        int getTotal(){
            return total;
        }
    
    private:
        int total;
};

int main(){
    Adder adder;

    adder.addNum(10);
    adder.addNum(10);
    adder.addNum(10);

    std::cout << "Total " << adder.getTotal() << std::endl;
    return 0;
}