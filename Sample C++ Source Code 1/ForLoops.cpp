#include "iostream" // header file
using namespace std; // namespace


int main() // main function
{
    for (int i = 0; i <= 10; i++) // for loop
    {
        for (int j = 0; j <= 10; j++) // nested for loop
        {
            cout << "i = " << i << ", j = " << j << endl; // print the values of i and j
        }
    }
    
    system("pause"); // pause the system
}