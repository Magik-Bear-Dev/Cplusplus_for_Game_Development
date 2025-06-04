#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

class Animal // base class
{
public:
    Animal(); // constructor
    Animal(string name, int age, int num_limbs); // constructor overload
 
    string Name; // declaration and initialization
    int Age; // declaration and initialization
    int NumberOfLimbs; // declaration and initialization

    void Report(); // function prototype
};

class Dog : public Animal // derived class
{
public:
    Dog(); // constructor
    Dog(string name, int age, int num_limbs); // constructor overload

    void Speak(); // function prototype
};

int main() // main function
{
    Dog dog("Spot", 4, 5); // create an object of the Dog class

    dog.Speak(); // call the function
    
    system("pause"); // pause the system
}

Animal::Animal() // constructor
{
    cout << "An animal is born!\n"; // print the message

    Name = "DEFAULT"; // assign a value to Name
    Age = 2; // assign a value to Age
    NumberOfLimbs = 4; // assign a value to NumberOfLimbs
}

Animal::Animal(string name, int age, int num_limbs):
    Name(name), Age(age), NumberOfLimbs(num_limbs) // constructor overload
{
    Report(); // call the function
}

void Animal::Report() // function
{
    cout << endl; // print a new line
    cout << "Name: " << Name << endl; // print the value of Name
    cout << "Age: " << Age << endl; // print the value of Age
    cout << "NumberOfLimbs: " << NumberOfLimbs << endl; // print the value of NumberOfLimbs
    cout << endl; // print a new line
}

Dog::Dog() // constructor
{
    cout << "A dog is born!\n"; // print the message
}

Dog::Dog(string name, int age, int num_limbs) // constructor overload
{
    Animal(name, age, num_limbs); // call the base class constructor
}

void Dog::Speak() // function
{
    cout << "Woof! Woof!\n"; // print the message
}

/*
================================================================

This is extra code to demonstrate Inheritance examples:

Exmaple 1:

Animal::Animal(string name, int age, int num_limbs)
{
    Name = name; // assign a value to Name
    Age = age; // assign a value to Age
    NumberOfLimbs = num_limbs; // assign a value to NumberOfLimbs
}

Example 2:

int main() // main function
{
    Animal animal; // create an object of the Animal class

    animal.Report(); // call the function

    Animal animal_2("Chettah", 7, 5); // create an object of the Animal class

    animal_2.Report(); // call the function
    
    system("pause"); // pause the system
}

Example 3:

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs) // constructor overload

================================================================
 */