#pragma once
#ifndef H_cylinderType
#define H_cylinderType

#include "circleType.h"
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


class cylinderType : public circleType
{
public:
	void print() const;

	void setHeight(double h);
	//Function to set the height.

	double getHeight() const;

	void setCenter(double, double);

	double getCenter() const;

	double surfaceArea() const;
	//Function to return the surface area of a cylinder.
	//Postcondition: Area is calculated and returned.

	double volume() const;
	//Function to return the volume of a cylinder.

	cylinderType();


	cylinderType(double, double, double, double);

private:
	double height;
	double pointX;
	double pointY;
};



#endif // !H_cylinderType