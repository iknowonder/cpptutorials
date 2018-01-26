// carrots.cpp -- Food treatment program.
// Use a single variable and print it.

#include <iostream>
int main()
{
	using std::cout;
	using std::endl;

	int  carrots;						// Declare an integer variable.

	carrots = 25;						//Assign a value to the variable
	cout << "I have " << carrots << " carrots.";		//Output the variable value.
	cout << endl;
	carrots = carrots - 1;					//Change the value of the variable.
	cout << "I eat a carrots.\n";
	cout << "Now there are " << carrots << " carrots." << endl;
	return 0;
}
