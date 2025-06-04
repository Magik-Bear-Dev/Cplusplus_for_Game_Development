#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace


int main() // main function
{
    int MyArray[5] = { 1, 23, 5, 4, 9 }; // declaration and initialization

    for (int i = 0; i < 5; i++) // for loop
    {
        cout << "MyArray[" << i << "] = " << MyArray[i] << endl; // print the value of MyArray
    }
    
    
    system("pause"); // pause the system
}



/*
================================================================

This is extra code to demonstrate the Array examples:

Example 1:

int MyIntArray[10]; // declaration and initialization

for (int i = 0; i <10, i++) // for loop
{
    MyIntArray[i] =i; // assign a value to the array
}

cout << "The first element in MyIntArray is: " << MyIntArray[0] << endl; // print the first element of the array

cout << "The firth element in MyIntArray is: " << MyIntArray[4] << endl; // print the fifth element of the array

Example 2:

int MyArray[5] = { 1, 23, 5, 4, 9 }; // declaration and initialization

    cout << "MyArray[0] = " << MyArray[0] << endl; // print the first element of the array
    cout << "MyArray[1] = " << MyArray[1] << endl; // print the second element of the array
    cout << "MyArray[2] = " << MyArray[2] << endl; // print the third element of the array
    cout << "MyArray[3] = " << MyArray[3] << endl; // print the fourth element of the array
    cout << "MyArray[4] = " << MyArray[4] << endl; // print the fifth element of the array
    

================================================================
 */