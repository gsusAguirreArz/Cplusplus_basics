#include <iostream>

class Box{
    private:
        double length;
        double breadth;
        double height;
    public:
        double getVolume(void){
            return length * breadth * height;
        }
        void setLength( double len ){
            length = len;
        }
        void setBreadth( double bre ){
            breadth = bre;
        }
        void setHeight( double hei ){
            height = hei;
        }

        // Overload + operator to add two Box objects.
        Box operator+( const Box& b ){
            Box box;
            box.length = this -> length + b.length;
            box.breadth = this -> breadth + b.breadth;
            box.height = this -> height + b.height;
            return box;
        }
};

int main(void){
    Box Box1, Box2, Box3;
    double volume = 0.0;

    // Box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // Box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // Volume of box 1
    volume = Box1.getVolume();
    std::cout << "Volume of Box1: " << volume << std::endl;

    // Volume of box 2
    volume = Box2.getVolume();
    std::cout << "Volume of Box2: " << volume << std::endl;

    // Add two object as follows:
    Box3 = Box1 + Box2;

    // Volume of box 3
    volume = Box3.getVolume();
    std::cout << "Volume of Box3: " << volume << std::endl;

    return 0;
}