#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

struct LocationVector // Struct
{
    float X; // declaration and initialization
    float Y; // declaration and initialization
    float Z; // declaration and initialization
};

struct Player // Struct
{
    int Level; // declaration and initialization
    float Health; // declaration and initialization
    float Damage; // declaration and initialization
    float Stamina; // declaration and initialization

    LocationVector Location = {0.f, 0.f, 0.f}; // declaration and initialization

    void TakeDamage(float dmg) // function
    {
        Health -= dmg; // subtract the damage from the health
    }

    int GetLevel() // function
    {
        if (Level > 10) // Check if the level is greater than 10
        {
            cout << "Level is greater than 10! \n"; // print the message
        }
        return Level; // return the level
    }

    void DisplayLoacaion()
    {
        cout << "Location.X = " << Location.X << endl; // print the value of X
        cout << "Location.Y = " << Location.Y << endl; // print the value of Y
        cout << "Location.Z = " << Location.Z << endl; // print the value of Z
    }
};

int main() // main function
{
    Player p_1; // declaration and initialization
    p_1.Level = 11; // assign a value to Level
    p_1.Health = 100.f; // assign a value to Health
    p_1.Damage = 10.f; // assign a value to Damage
    p_1.Stamina = 20.f; // assign a value to Stamina

    cout << "p_1 Level =  " << p_1.GetLevel() << endl; // print the level

    p_1.TakeDamage(40.f); // call the function

    cout << "p_1 takes " << 40.f << " damage!" << endl;  // print the message
    cout << "p_1 Health = " << p_1.Health << endl; // print the health

    p_1.DisplayLoacaion(); // call the function

    Player p_2 = {1, 50.f, 40.f, 35.54f, {35.5f, 67.45, 100.003f} }; // declaration and initialization

    p_2.DisplayLoacaion(); // call the function
    
    system("pause"); // pause the system
}
