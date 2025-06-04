#include <iostream> // header file

int main() // main funtion

int a = 10; // declaration, initialization and global variable

{
    {
       int b = 12; // declaration, initialization and local variable
        cout << b << endl; // print the value of b
       {
           int c; // declaration
           c = 3; // initialization
       }
    }
    cout << a << endl();
    
    system("pause"); // pause the system
}
