#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

struct Cat // struct
{
    Cat(); // constructor

    int age; // declaration
    float Health; // declaration

    void Meow(); // function
};

Cat::Cat() // constructor
{
    cout << "A new cat is born!" << endl; // print the message

    age = 3; // assign a value to age
    Health = 100.f; // assign a value to Health

    Meow(); // call the function
}

void Cat::Meow() // function
{
    cout << "My age is: !" << age << ".\n"; // print the message
    cout << "My health is: " << Health << ".\n"; // print the message
}

int main() // main function
{
    Cat cat; // declaration and initialization

    cat.age += 5; // increment the age

    cat.Meow(); // call the function
    
    
    system("pause"); // pause the system
}


/*
================================================================

This is extra code to demonstrate constuctor examples:

Example 1:

class Dog // class
{
public: // access specifier

    Dog(); // constructor
    
    string Name; // declaration
    int Age; // declaration
    float Health; // declaration

    void Bark(); // function
};

int main() // main function
{
    Dog dog;

    cout << dog.Name << endl; // print the value of Name
    cout << dog.Age << endl; // print the value of Age
    cout << dog.Health << endl; // print the value of Health

    dog.Name = "Fido"; // assign a value to Name
    dog.Age = 5; // assign a value to Age
    dog.Health = 50.f; // assign a value to Health

    cout << dog.Name << endl; // print the value of Name
    cout << dog.Age << endl; // print the value of Age
    cout << dog.Health << endl; // print the value of Health
    
    system("pause"); // pause the system
}

Dog::Dog() // constructor
{
    Bark(); // call the function

    Name = "Default Name"; // assign a value to Name
    Age = 10; // assign a value to Age
    Health = 100.f; // assign a value to Health
}

void Dog::Bark() // function
{
    cout << "Woof! Woof!" << endl; // print the message
}

    
================================================================
 */