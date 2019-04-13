#include "pch.h"
#include "circleType.h"

using namespace std;

const double PI = 3.1415926;



void circleType::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
		radius = 0;
}

double circleType::getRadius() const
{
	return radius;
}



double circleType::area() const
{
	return PI * radius * radius;
}

double circleType::circumference() const
{
	return 2 * PI * radius;
}

circleType::circleType(double r)
{
	setRadius(r);
	
}


void circleType::print() const
{
	cout << " The radius of a circle: " << getRadius() << endl;
	cout << " The area of a circle: " << area() << endl;
	cout << " The circumference of a circle: " << circumference() << endl;

}