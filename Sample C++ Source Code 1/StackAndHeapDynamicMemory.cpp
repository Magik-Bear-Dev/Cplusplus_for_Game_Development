#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

struct Character // struct
{
    Character(); // constructor

    void PrintHealth(); // function
    
    string Name; // declaration
    float Health; // declaration
};

Character::Character() // constructor
{
    Name = "Default Name"; // assign a value to Name
    Health = 100.f; // assign a value to Health
}

void Character::PrintHealth() // function
{
    cout << "Health = " << Health << endl; // print the value of Health
}

int main() // main function
{
    for (int i = 0; i < 10; i++) // for loop
    {
        Character* PtrToChar = new Character(); // dynamic memory allocation

        cout << PtrToChar->Name << endl; // print the value of Name

        PtrToChar->PrintHealth(); // call the function

        delete PtrToChar; // deallocate the memory
    }

    
    system("pause"); // pause the system
}