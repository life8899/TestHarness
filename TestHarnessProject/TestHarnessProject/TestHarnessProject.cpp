#include "pch.h"
#include "cylinderType.h"

using namespace std;

const double PI = 3.1415926;

int main()
{
	double radius;
	double height;
	double X, Y;

	circleType circle1;
	cylinderType cylinder1;


	cout << fixed << showpoint << setprecision(2);

	cout << "Enter cylinder height and radius : " << endl;
	cin >> height >> radius;

	cylinder1.setRadius(radius);

	cylinder1.setHeight(height);

	cout << "Enter two number of the center of a cylinder : " << endl;
	cin >> X >> Y;

	cylinder1.setCenter(X, Y);

	cylinder1.print();


	cout << endl;


	return 0;
}

