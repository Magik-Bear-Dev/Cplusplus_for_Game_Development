#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

void Print(string str); // function prototype
void Print(int i); // function prototype
void Print(string str1, string str2); // function prototype (overloading)
void Print(int i, string str); // function prototype (overloading)


int main() // main function
{
    int myInt = 1; // declaration and initialization
    string myStr = "Hello"; // declaration and initialization
    string mySecondStr = "World"; // declaration and initialization

    Print(myStr); // call the function
    Print(mySecondStr); // call the function
    Print (myInt); // call the function
    Print(myInt, mySecondStr); // call the function

    Print(myStr, mySecondStr); // call the function

    system("pause"); // pause the system
}

void Print(string str) // function
{
    cout << str << endl; // print the string
}

void Print(int i) // function
{
    cout << i << endl; // print the integer
}

void Print(string str1, string str2) // function
{
    cout << "String 1: " << str1 << endl; // print the strings
    cout << "String 2: " << str2 << endl; // print the strings
}

void Print(int i, string str) // function
{
    cout << "Integer value: " << i << endl; // print the integer
    cout << "String value: " << str << endl; // print the string
}