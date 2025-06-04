#include <iostream> // header file

// If statements are used to execute a block of code if a specified condition is true.
// Else statements are used to execute a block of code if the condition is false.

int main() // main function
{
    int a(13); // declaration and initialization
    int b = 13; // declaration and initialization

    if (b < a) // if conditon
    {
        std::cout << "a is less than b" << std::endl; // if condition
    }
    else if (a < b) // else if conditon
    {
        cout << "a is less than b" << endl; // else if condition
    }
    else (a == b) // else condition
    {
        cout << "a is equal to b" << endl; // else condition
    }
    else
    {
        cout << "b is not less than a, a is not less than b, and a is not equal to b." << endl; // else condition
    }
    
    system ("pause"); // pause the system
};