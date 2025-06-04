#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

class Object // class
{
public:
   virtual void BeginPlay(); // function
};

class Actor : public Object // derived class
{
public:
    virtual void BeginPlay() override; // function override
};

class Pawn : public Actor // derived class
{
public:
    virtual void BeginPlay() override; // function override
};

int main() // main function
{
    Object* obj = new Object(); // declaration and initialization
    obj->BeginPlay(); // call the function

    Actor* act = new Actor(); // declaration and initialization
    act->BeginPlay(); // call the function

    Pawn* pwn = new Pawn(); // declaration and initialization
    pwn->BeginPlay(); // call the function
    
    delete obj; // delete the object
    delete act; // delete the object
    delete pwn; // delete the object
    system("pause"); // pause the system
}

void Object::BeginPlay() // function
{
    cout << "Object BeginPlay() called.\n"; // print the message
}

void Actor::BeginPlay() // function override
{
    cout << "Actor BeginPlay() called.\n"; // print the message
    Object::BeginPlay(); // call the base class function
}

void Pawn::BeginPlay() // function override
{
    cout << "Pawn BeginPlay() called.\n"; // print the message
    Object::BeginPlay(); // call the base class function
    Actor::BeginPlay(); // call the base class function
}