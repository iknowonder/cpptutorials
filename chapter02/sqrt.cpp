// sqrt.cpp -- Using the sqrt() function.

#include <iostream>
#include <cmath> 	// or math.h

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double area;
	cout << "Enter the floor area in square feet: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "If you have a square floor, one side is equivalent to "
	     << side << " feet." << endl;
	cout << "awesome." << endl;
	return 0;
}
