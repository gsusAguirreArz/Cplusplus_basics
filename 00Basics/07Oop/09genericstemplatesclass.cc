#include <iostream>
#include <string>

template<class genType>
class genClass{
    protected:
        std::string dataMember1;
        genType dataMember2;
        double dataMember3;
    public:
        genClass( std::string s = "", genType i = NULL, double d = 1 ){
            dataMember1 = s;
            dataMember2 = i;
            dataMember3 = d;
        }

        void memberFunction1(){
            std::cout << dataMember1 << ' ' << dataMember2 << ' ' << dataMember3 << std::endl;
            return;
        }

        void memberFunction2( genType i, std::string s = "Unknown" ){
            dataMember2 = i;
            std::cout << i << " received from " << s << std::endl;
            return;
        }
};

int main(){
    genClass<int> object1("object1",100, 2000), object2("object2",3);
    genClass<double> object3("object3", 15.0);

    object1.memberFunction1();
    object1.memberFunction2(123);

    return 0;
}