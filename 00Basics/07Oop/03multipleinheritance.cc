#include <iostream>

// Base class Shape
class Shape{
    protected:
        int width;
        int height;
    public:
        void setWidth( int w ){
            width = w;
        }
        void setHeight( int h ){
            height = h;
        }
};

// Base class PaintCost
class PaintCost{
    public:
        int getCost( int area ){
            return area * 70;
        }
};

// Derived class
class Rectangle:public Shape, public PaintCost{
    public:
        int getArea(){
            return width * height;
        }
};

int main(void){
    Rectangle Rect;
    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    // Print the area of the object.
    std::cout << "Total area: " << Rect.getArea() << std::endl;

    // Print the total cost of painting
    std::cout << "Total paint cost: $" << Rect.getCost(area) << std::endl;
    return 0;
}