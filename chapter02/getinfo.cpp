// getinfo.cpp -- input and output
#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int carrots;

	cout << "Enter your number of carrots : ";
	cin >> carrots; // input at C++
	cout << "Here is two carrots." << endl;
	carrots = carrots + 2;
	cout << "Now all " << carrots << " carrots." << endl;
	return 0;
}
