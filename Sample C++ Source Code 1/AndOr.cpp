#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace


int main() // main function
{
    int i = 1; // declaration and initialization
    int j = 2; // declaration and initialization
    int k = 3; // declaration and initialization

    if (i <= k || i == j) // if condition
    {
        cout << "this will be be printed. " << endl; // print the message
    }

    if (i <= k && i == j) // if condition
    {
        cout << "this will not be printed. " << endl; // print the message
    }
    
    
    system("pause"); // pause the system
}