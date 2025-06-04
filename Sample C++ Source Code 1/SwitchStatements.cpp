#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

enum PlayerStatus // enum
{
    PS_Running, // enum values
    PS_Walking, // enum values
    PS_Crouching, // enum values
};

const float RunSpeed = 800.f; // constant variable
const float WalkSpeed = 500.f; // constant variable
const float CrouchSpeed = 350.f; // constant variable

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed); // function

int main() // main function
{
    float MovementSpeed; // declaration and initialization

    PlayerStatus status = PS_Walking; // declaration and initialization

    UpdateMovementSpeed(status, MovementSpeed); // call the function

    cout << "MovementSpeed = " << MovementSpeed << endl; // print the value of MovementSpeed

    int integar = 1; // declaration and initialization

    void SwitchOnInt(int i); // function

    
    system("pause"); // pause the system
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed) // function
{
     switch (P_Status) // switch statement
     {
         case PS_Running: // case statement
                speed = RunSpeed; // set the speed to RunSpeed
                break; // break statement
         case PS_Walking: // case statement
             speed = WalkSpeed; // set the speed to WalkSpeed
             break; // break statement
         case PS_Crouching: // case statement
             speed = CrouchSpeed; // set the speed to CrouchSpeed
             break; // break statement
     }
}

void SwitchOnInt(int i) // function
{
    switch (i) // switch statement
    {
    case 0: // case statement
        cout << "Your number was zero. \n"; // print the message
        break; // break statement
    case 1: // case statement
        cout << "Your number was one. \n"; // print the message
        break; // break statement
    case 2: // case statement
        cout << "Your number was two. \n"; // print the message
        break; // break statement
    default: // default statement
        cout << "Your number was not zero, one or two. \n"; // print the message
    }
}

/*
================================================================

This is extra code to demonstrate the if else statement examples to show how much better the switch statement is.
The if else statement is not as efficient as the switch statement.

if (P_Status == PS_Running) // if condition
        {
            speed = RunSpeed; // set the speed to RunSpeed
        }
    else if (P_Status == PS_Walking) // else if condition
    {
        speed = WalkSpeed; // set the speed to WalkSpeed
    }
    else if (P_Status == PS_Crouching) // else if condition
    {
        speed = CrouchSpeed; // set the speed to CrouchSpeed
    }
    
================================================================
 */
