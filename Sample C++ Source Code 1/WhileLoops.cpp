#include "iostream" // header file
using namespace std; // namespace


int main() // main function
{
    int myInt(0); // declaration and initialization

    int count = 0; // declaration and initialization

    while (count >= 10) // while loop
    {
        cout << myInt << endl; // print the value of myInt
        myInt++; // increment myInt
        count++; // increment the count
    }

    system("pause"); // pause the system
}
