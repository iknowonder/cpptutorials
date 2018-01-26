// ourfunc.cpp -- Define functions that you create.

#include <iostream>
void simon(int);	//Function prototype for simon()

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	simon(3);	//call simon()
	cout << "Choose an integer: ";
	int count;
	cin >> count;
	simon(count);	//call simon()
	cout << "The end!" << endl;
	return 0;
}

void simon(int n)	//Define the simon()
{
	using namespace std;
	cout << "Simon said, Tap your toes " << n << " times." << endl;
	// A void function doew not need a return statement.
}
