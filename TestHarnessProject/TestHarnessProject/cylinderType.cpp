#include "pch.h"
#include "cylinderType.h"

using namespace std;

const double PI = 3.1415926;

void cylinderType::setHeight(double h)
{
	height = h;
}

double cylinderType::getHeight() const
{
	return height;
}


void cylinderType::setCenter(double x, double y)
{
	pointX = x;
	pointY = y;
}

double cylinderType::getCenter() const
{
	return (pointX, pointY);

}

// Calculations 
double cylinderType::surfaceArea() const
{

	return 2 * PI * (getRadius() * getRadius()) + (2 * PI * getRadius()) * height;
	return 2 * area() + circumference() * height;
}

// Calculations 
double cylinderType::volume() const
{
	return PI * getRadius() * getRadius() * height;
	return area() * height;
}

cylinderType::cylinderType()
{
	setRadius(0);
	height = 0;
}

cylinderType::cylinderType(double r, double h, double x, double y)
{
	setRadius(r);
	height = h;
	//setCenter(x, y);
	pointX = x;
	pointY = y;

}

void cylinderType::print() const
{
	cout << " The center of a base: " << getCenter() << endl;
	cout << " The radius of a cylinder: " << getRadius() << endl;
	cout << " The surface area of a cylinder: " << surfaceArea() << endl;
	cout << " The volume of a cylinder: " << volume() << endl;
}