#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

class Creature // class
{
public:
    Creature(); // constructor

    void SetName(string name); // function prototype
    string GetName(); // function prototype

    float GetHealth(); // function prototype

    void TakeDamage(float damage); // function prototype
    
private:
    string Name; // declaration and initialization
    float Health; // declaration and initialization

protected:
    int NumberOfLimbs; // declaration and initialization
    
};

class Goblin : public Creature // class
{
public:
    Goblin(); // constructor

    int GetNumberOfLimbs(); // function
};

int main() // main function
{
    Goblin Gobby; // declaration and initialization

    cout << Gobby.GetName() << endl; // print the name
    cout << Gobby.GetNumberOfLimbs() << endl; // print the number of limbs

    system("pause"); // pause the system
}

Creature::Creature() // declaration and initialization
{
    Health = 100.f; // assign a value to Health
    cout << "A creature has been created!\n"; // print the message
}

void Creature::SetName(string name) // function
{
    Name = name; // assign a value to Name
}

string Creature::GetName() // function
{
    return Name; // return the name
}

float Creature::GetHealth() // function
{
    return Health; // return the health
}

void Creature::TakeDamage(float damage) // function
{
    float Total; // declaration and initialization
    Total = Health - damage; // subtract the damage from the health

    if (Total <= 0.f) // if condition
    {
        cout << GetName() << " has died! \n"; // print the message
    }
    else // else condition
    {
        Health -= damage; // assign a value to Health
    }

    cout << "Health: = " << Health << endl; // print the value of Health
}

Goblin::Goblin() // constructor
{
    NumberOfLimbs = 5; // assign a value to NumberOfLimbs

    SetName("Gobby"); // call the function
}

int Goblin::GetNumberOfLimbs() // function
{
    return NumberOfLimbs; // return the value of NumberOfLimbs
}


/*
================================================================

This is a extra code examples:

int main() // main function
{
Creature Igor; // declaration and initialization
Igor.SetName("Igor"); // call the function
cout << "Name" << Igor.GetName() << endl; // print the value of Name
cout << "Health" << Igor.GetHealth() << endl; // print the value of Health

cout << "Igor takes 35 damage!" << endl; // print the message

Igor.TakeDamage(35.0); // call the function
    

system("pause"); // pause the system
}

================================================================
