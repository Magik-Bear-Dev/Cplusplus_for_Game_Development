#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

class Character // class
{
public: // access specifier
    Character(); // constructor
    ~Character(); // destructor

    int* CharacterAge; // declaration
    float* CharacterHealth; // declaration
};

int main() // main function
{
    Character* Char = new Character; // create a new character
    delete Char; // delete the character
    
    system("pause"); // pause the system
}

Character::Character() // constructor
{
    cout << "A new character created!\n"; // print the message

    CharacterAge = new int(1); // create a new int
    CharacterHealth = new float(100.f); // create a new float
}

Character::~Character() // destructor
{
    cout << "Character destroyed!\n"; // print the message

    delete CharacterAge; // delete the int
    delete CharacterHealth; // delete the float
}