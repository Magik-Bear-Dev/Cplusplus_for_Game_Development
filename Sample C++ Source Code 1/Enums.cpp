#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

enum PlayerStatus // enum declaration
{
    PS_Crouched, // enum values
    PS_Standing, // enum values
    PS_Walking, // enum values
    PS_Running // enum values
};

int main() // main function
{
    PlayerStatus status; // declaration and initialization
    status = PlayerStatus::PS_Crouched; // assign a value to status
    status = PlayerStatus::PS_Standing; // assign a value to status
    status = PlayerStatus::PS_Walking; // assign a value to status
    status = PlayerStatus::PS_Running; // assign a value to status

    
    system("pause"); // pause the system
}


/*
================================================================

This is extra code to demonstrate the Array examples:

Example 1:

PlayerStatus status; // declaration and initialization
    status = PS_Crouched; // assign a value to status

    if (status == PS_Crouched)
    {
        cout << "The player is crouching! \n"; // print the message
    }
    
================================================================
 */