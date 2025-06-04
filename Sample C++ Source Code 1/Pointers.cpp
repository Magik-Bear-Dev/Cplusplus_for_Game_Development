#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

struct Container // struct
{
    string Name; // member variable
    
    int X; // member variable
    int Y; // member variable
    int Z; // member variable
};

int main() // main function
{
    Container container = {"Sam", 5, 6, 7 }; // declaration and initialization

    Container* PtrToCont = &container; // declaration and initialization

    cout << PtrToCont->Name << endl; // print the value of Name - Using the arrow operator is better than using the dot operator.
    cout << PtrToCont->X << endl; // print the value of X
    cout << PtrToCont->Y << endl; // print the value of Y
    cout << PtrToCont->Z << endl; // print the value of Z
    
    
    system("pause"); // pause the system
}


/*
================================================================

This is extra code to demonstrate pointer examples:

Example 1:

int a = 100.f; // declaration and initialization

    int* aPtr = &a; // declaration and initialization
    aPtr = &a; // assign a value to aPtr

    cout << "*aPtr " << endl; // print the value of a

    int b = 50; // declaration and initialization

    aPtr = &b; // assign a value to aPtr

    cout << "*aPtr " << endl; // print the value of a

Example 2:

int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10}; // declaration and initialization

    int* NumPtr = numbers; // declaration and initialization

    cout << "*NumPtr" << endl; // print the value of NumPtr

    NumPtr++; // increment the pointer

    cout << "*NumPtr" << endl; // print the value of NumPtr

    NumPtr++; // increment the pointer

    NumPtr += 3; // increment the pointer by 3

    cout << "*NumPtr" << endl; // print the value of NumPtr

Example 3:

    cout << (*PtrToCont).Name << endl; // print the value of Name
    cout << (*PtrToCont).X << endl; // print the value of X
    cout << (*PtrToCont).Y << endl; // print the value of Y
    cout << (*PtrToCont).Z << endl; // print the value of Z
    
================================================================
 */