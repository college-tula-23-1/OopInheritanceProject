// Inheritance
//
#include <iostream>
#include <string>

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

    std::string ToString()
    {
        return "(" + std::to_string(x) + ","
            + std::to_string(y) + ")";
    }
};

class Line : public Point
{
    int dx;
    int dy;
public:
    Line() : Point(), dx{}, dy{}
    {
        std::cout << this << " Line construct\n";
    }

    Line(int x, int y, int dx, int dy)
        : Point(x, y), dx{ dx }, dy{ dy }
    {
        std::cout << this << " Line construct\n";
    }

    ~Line()
    {
        std::cout << this << " Line destruct\n";
    }

    int& DX() { return dx; }
    int& DY() { return dy; }

    std::string ToString()
    {
        return Point::ToString() + " - ("
            + std::to_string(x + dx) + ", "
            + std::to_string(y + dy) + ")";
    }
};

int main()
{
    /*Point* ptrPoint = new Point(7, 9);
    std::cout << ptrPoint->ToString() << "\n";

    Line* ptrLine = new Line(2, 5, 10, 21);
    ptrLine->X() = 3;
    ptrLine->DY() = 25;
    
    std::cout << ptrLine->ToString() << "\n";*/
    
    /*Point abase(5, 7);
    Line aline(1, 2, 3, 4);

    std::cout << "\n\n";*/

    Point* point = new Point(1, 2);
    Line* line = new Line(1, 2, 3, 4);

    std::cout << "\n\n";

    delete point;
    delete line;
    

    /*Point* base = new Point(5, 7);
    std::cout << base->ToString() << "\n";

    base = new Line(3, 1, 7, 5);
    std::cout << base->ToString() << "\n";*/
}
