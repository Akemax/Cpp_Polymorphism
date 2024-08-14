#include <iostream>

using namespace std;

class Shape 
{
public:
	virtual double Area() = 0;
	virtual double Perimeter() = 0;
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
	double Perimeter()
	{
		return 3 * base;
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
	double Perimeter()
	{
		return 4 * base;
	}
};
#include <iostream>
using namespace std;

class Student
{
public:
	Student(string n, int id)
	{
		name = n;
		student_id = id;
	}
	static bool CompareStudents(Student X, Student Y)
	{
		if (X.name == Y.name && X.student_id == Y.student_id)
		{
			return true;
		}
		return false;
	}
private:
	string name;
	int student_id;
};


int main()
{
	Triangle t(4, 4);
	cout << t.Area() << endl;
	Rectangle r(4, 4);
	cout << r.Area() << endl;
	cout << t.Perimeter() << endl;
	cout << r.Perimeter() << endl;


	Student andy("Andy Ace", 123456);
	Student anderson("Anderson Ace", 123456);
	Student ace("Andy Ace", 123456);
	Student andrew("Andy Ace", 234567);
	cout << boolalpha;
	cout << Student::CompareStudents(andy, anderson) << endl;
	cout << Student::CompareStudents(andy, ace) << endl;
	cout << Student::CompareStudents(andy, andrew) << endl;
}
