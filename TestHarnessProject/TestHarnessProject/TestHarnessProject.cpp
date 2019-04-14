#include "pch.h"
#include "cylinderType.h"

using namespace std;

const double PI = 3.1415926;

int main()
{
	double radius;
	
	double cylinder_radius;
	double cylinder_height;
	double X, Y;
	string color;

	circleType circle1;
	cylinderType cylinder1;


	cout << fixed << showpoint << setprecision(2);

	cout << "Enter radius of the circle : " << endl;
	cin >> radius;
	circle1.setRadius(radius);

	cout << "Enter cylinder height and radius : " << endl;
	cin >> cylinder_height >> cylinder_radius;

	cylinder1.setRadius(cylinder_radius);
	cylinder1.setHeight(cylinder_height);

	cout << "Enter two number of the center of a cylinder : " << endl;
	cin >> X >> Y;

	cout << "========================== " <<endl;
	circle1.print();
	cout << endl;
	cout << "========================== " << endl;
	cylinder1.setCenter(X, Y);
	cylinder1.print();


	cout << endl;


	return 0;
}

