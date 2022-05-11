#include <iostream>

// Base class
class Shape{
    protected:
        int width;
        int height;

    public:
        virtual int getArea() = 0;

        void setWidth( int w ){
            width = w;
        }

        void setHeight( int h ){
            height = h;
        }
};

// Derived classes
class Rectangle: public Shape {
    public:
        int getArea(){
            return (width * height);
        }
};

class Triangle: public Shape {
    public:
        int getArea(){
            return (width * height) / 2;
        }
};

int main(void){
    Shape *shape;
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    shape = &Rect;
    std::cout << "Total Rectangle area: " << shape -> getArea() << std::endl;

    Tri.setWidth(5);
    Tri.setHeight(7);
    shape = &Tri;
    std::cout << "Total Triangle area: " << shape -> getArea() << std::endl;
    return 0;
}