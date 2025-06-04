#include <iostream> // header file
using namespace std; // namespace

int main() // main function
{
	char myCharacter; // declaration
	myCharacter = 'y'; // assign a value to myCharacter

	int myInt; // declaration
	myInt = 13; // assign a value to myInt

	cout << myCharacter << endl; // print the value of myCharacter
	cout << myInt << endl; // print the value of myInt

	myCharacter = 'n'; // assign a new value to myCharacter
	myInt = 12; // assign a new value to myInt

	cout << myCharacter << endl; // print the new value of myCharacter
	cout << myInt << endl; // print the new value of myInt

	system("pause"); // pause the system
}