#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

void ChangeStr(string& str); // function prototype

int main() // main function
{
    string myStr = "Magik" // declaration and initialization

    ChangeStr(myStr); // call the function

    cout << myStr << endl; // print the value of myStr
    
    system("pause"); // pause the system
}

void ChangeStr(string& str) // function
{
    str += " is a magician"; // concatenate the string
}