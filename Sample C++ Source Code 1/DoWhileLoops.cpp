#include "iostream" // header file
using namespace std; // namespace


int main()
{
    double NumberPI = 3.1459; // declaration and initialization
    double NumberE = 2.71828; // declaration and initialization

    int count = 0; // declaration and initialization

    bool condition = true; // declaration and initialization

    do
    {
        cout << "The value of PI is: " << NumberPI << endl; // print the value of PI
        cout << "The value of E is: " << NumberE << endl; // print the value of E
        cout << "Count: " << count << endl; // print the value of count
        cout << "PI + E x count = " << NumberPI + NumberE * count << endl; // print the value of PI + E x count
        
        count++; // increment the count
        if (count <= 100) // if condition
        {
            Condition = true; // set the condition to true
        }
        else // else condition
        {
            Condition = false; // set the condition to false
        }
    } while (Condition); // do while loop
    
    system("pause"); // pause the system
}
