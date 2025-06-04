#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace


int main() // main function
{
    string MyString; // declaration and initialization

    MyString = "My dog's name is: "; // assign a value to MyString
    string first = "Bobby "; // assign a value to firstName
    string last = "Smith"; // assign a value to lastName

    MyString += (first + last); // concatenate the strings (first name  + last name)

    cout << MyString << endl; // print the value of MyString

    system("pause"); // pause the system
}

