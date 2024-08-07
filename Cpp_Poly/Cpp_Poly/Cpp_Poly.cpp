#include <iostream>

using namespace std;

class Shape 
{
public:
	virtual double Area() = 0;
	double GetBase() 
	{
		return base;
	}
	void SetBase(double base) 
	{
		this->base = base;
	}
	double GetHeight() 
	{
		return height;
	}
	void SetHeight(double height) 
	{
		this->height = height;
	}
protected:
	double base;
	double height;
};

class Triangle : public Shape 
{
public:
	Triangle(double b, double h) 
	{
		base = b;
		height = h;
	}
	double Area() 
	{
		return base * height / 2;
	}
};

class Rectangle : public Shape 
{
public:
	Rectangle(double b, double h) 
	{
		base = b;
		height = h;
	}
	double Area() 
	{
		return base * height;
	}
};



int main()
{
	Triangle t(4, 4);
	cout << t.Area() << endl;
	Rectangle r(4, 4);
	cout << r.Area() << endl;
}
