// Inheritance
//
#include <iostream>

class Point
{
protected:
    int x;
    int y;
public:
    Point() : x{}, y{} 
    {
        std::cout << this << " Point construct\n";
    }
    Point(int x, int y) : x{ x }, y{ y } 
    {
        std::cout << this << " Point construct\n";
    }
    ~Point()
    {
        std::cout << this << " Point destruct\n";
    }

    int& X() { return x; }
    int& Y() { return y; }

    void Print()
    {
        std::cout << "x: " << x << ", y: " << y << "\n";
    }
};

class Line : public Point
{
    int dx;
    int dy;
public:
    Line()
    {
        x = 0;
        y = 0;
        dx = 0;
        dy = 0;

        std::cout << this << " Line construct\n";
    }
    ~Line()
    {
        std::cout << this << " Line destruct\n";
    }

    int& DX() { return dx; }
    int& DY() { return dy; }
};

int main()
{
    Line* ptrLine = new Line();
    
    Point* ptrPoint = new Line();

    ((Line*)ptrPoint)->DX();
    
}
