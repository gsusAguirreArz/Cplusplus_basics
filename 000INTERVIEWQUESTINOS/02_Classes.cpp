#include <iostream>

class Cookie {
    private:
        std::string color;

    public:
        Cookie( std::string color ){
            this->color = color;
        }

        std::string getColor(){
            return color;
        }

        void setColor( std::string color ){
            this -> color = color;
        }
};


int main(){

        Cookie* cookieOne = new Cookie("green");
        Cookie* cookieTwo = new Cookie("blue");

        std::cout << "C1: " << cookieOne->getColor() << std::endl;
        std::cout << "C2: " << cookieTwo->getColor() << std::endl;

        cookieOne->setColor("Yellow");
        std::cout << "C1: " << cookieOne->getColor() << std::endl;

        return 0;

}