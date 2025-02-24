#pragma once
class Shape
{
	int x;
	int y;

public:
	Shape() : x{}, y{} {}
	Shape(int x, int y) : x{ x }, y{ y } {}

	int& X() { return x; }
	int& Y() { return y; }

	virtual double Area() = 0;
};

class Rectangle : public Shape
{
	int width;
	int height;

public:
	Rectangle() : Shape(), width{}, height{} {}
	Rectangle(int width, int height)
		: Shape(), width{ width }, height{ height } {}
	Rectangle(int x, int y, int width, int height)
		: Shape(x, y), width{ width }, height{ height } {}

	int& Width() { return width; }
	int& Height() { return height; }

	double Area() override
	{
		return width * height;
	}
};

class Circle : public Shape
{
	int radius;
public:
	Circle() : Shape(), radius{} {}
	Circle(int radius) 
		: Shape(), radius{ radius  } {}
	Circle(int x, int y, int radius) 
		: Shape(x, y), radius{ radius } {}

	int& Radius() { return radius; }

	double Area()
	{
		return 3.1416 * radius * radius;
	}
};

