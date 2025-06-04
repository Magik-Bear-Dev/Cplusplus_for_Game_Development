#include "iostream" // header file
#include "string" // header file
#include "ObjectHeaderFile.h" // header file"
#include "ActorForHeaderFile.h" // header file
#include "PawnForHeaderFile.h" // header file
using namespace std; // namespace

void InheritanceFunction() // function
{
    Object* ptr_to_object = new Object; // declaration and initialization
    Actor* ptr_to_actor = new Actor; // declaration and initialization
    Pawn* ptr_to_pawn = new Pawn; // declaration and initialization

    Object* ObjectArray[] = {ptr_to_object, ptr_to_actor, ptr_to_pawn}; // array of pointers

    for (int i = 0; i < 3; i++) // for loop
    {
        Object* obj = ObjectArray[i]; // declaration and initialization

        Actor* act = dynamic_cast<Actor*>(obj); // static cast

        if (act) // if condition
        {
            act->ActorFunction(); // call the function
        }

        Pawn* pwn = dynamic_cast<Pawn*>(obj); // dynamic cast

        if (pwn) // if condition
        {
            pwn->PawnFunction(); // call the function
        }
    }

    delete ptr_to_object; // delete the object
    delete ptr_to_actor; // delete the object
}

int main() // main function
{
    InheritanceFunction(); // call the function
    
    system("pause"); // pause the system
}

