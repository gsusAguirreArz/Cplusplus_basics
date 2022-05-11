#include <iostream>

class Shape{
    protected:
        int width, height;
    
    public:
        Shape( int a = 0, int b = 0 ){
            width = a;
            height = b;
        }

        // static resolution | static linkage | early binding without virtual
        // virtual int area(){
        //     std::cout << "Paren cass area: " << std::endl;
        //     return 0;
        // }
        // Pure virtual function (dynamic linkage | late binding)
        virtual int area() = 0;
};

class Rectangle:public Shape
{
public:
    Rectangle( int a = 0, int b = 0 ):Shape(a,b){}

    int area(){
        std::cout << "Rectangle class area: " << std::endl;
        return (width * height);
    }
};

class Triangle:public Shape
{
public:
    Triangle(int a = 0, int b = 0):Shape(a,b){}

    int area(){
        std::cout << "Triangle class area: " << std::endl;
        return (width*height/2);
    }
};

// Main function for the program
int main(void){
    Shape *r, *t;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    // Store the address of Rectangle
    r = &rec;

    // Call rectangle area
    r -> area();

    // store the address of Triangle
    t = &tri;

    // Call triangle area.
    t -> area();

    return 0;
}