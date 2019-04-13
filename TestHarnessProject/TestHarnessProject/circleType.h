#pragma once
#ifndef H_circleType
#define H_circleType

#include <string>
#include <iostream>
#include <iomanip>

class circleType
{
	public:
		
		void setRadius(double r);
		//Function to set the radius.
		//Postcondition: if (r >= 0) radius = r;
		// otherwise radius = 0;

		double getRadius() const;
		//Function to return the radius.
		//Postcondition: The value of radius is returned.

		
		double area() const;
		//Function to return the area of a circle.
		//Postcondition: Area is calculated and returned.

		double circumference() const;
		//Function to return the circumference of a circle.
		//Postcondition: Circumference is calculated and returned.

		circleType(double r = 0);
		//Constructor with a default parameter.
		//Radius is set according to the parameter.
		//The default value of the radius is 0.0;
		//Postcondition: radius = r;

		void print() const;
		//Add the function print to this class to output the radius, area, and circumference of a circle.


	private:
		double radius;
		
};

#endif 