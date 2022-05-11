
#include <iostream>

class Adder{
    public:
        // cosntructor
        Adder( int i = 0){
            total = i;
        }

        // interface to ouside world
        void addNum( int number ){
            total += number;
        }

        // interface to ouside world
        int getTotal(){
            return total;
        }
    
    private:
        // hidden data from outside world
        int total;
};

int main(){
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    std::cout << "Total " << a.getTotal() << std::endl;

    return 0;
}