#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

class Object // class
{
public:
    virtual void BeginPlay(); // function

    void ObjectFunction() // function
    {
        cout << "ObjectFunction() called. \n\n"; // print the message
    }
};

class Actor : public Object // derived class
{
public:
    virtual void BeginPlay() override; // function override

    void ActorFunction() // function
    {
        cout << "ActorFunction() called. \n\n"; // print the message
    }
};

class Pawn : public Actor // derived class
{
public:
    virtual void BeginPlay() override; // function override

    void PawnFunction() // function
    {
        cout << "PawnFunction() called. \n\n"; // print the message
    }
};

int main() // main function
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
    system("pause"); // pause the system
}

void Object::BeginPlay() // function
{
    cout << "Object BiginPlay() called. \n\n"; // print the message
}

void Actor::BeginPlay() // function
{
    cout << "Actor BeginPlay() called. \n\n"; // print the message
}

void Pawn::BeginPlay() // function
{
    cout << "Pawn BeginPlay() called. \n\n"; // print the message
}



/*
================================================================

This is extra code to demonstrate Casting examples:

Example 1:

for (int i = 0; i < 3; i++) // for loop
    {
        Object* obj = ObjectArray[i]; // declaration and initialization

        Actor* act = static_cast<Actor*>(obj); // static cast

        if (act) // if condition
        {
            act->ActorFunction(); // call the function
        }

        Pawn* pwn = static_cast<Pawn*>(obj); // dynamic cast

        if (pwn) // if condition
        {
            pwn->PawnFunction(); // call the function
        }
    }

================================================================
 */