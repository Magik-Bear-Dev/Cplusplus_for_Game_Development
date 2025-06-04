#include "iostream" // header file
#include "string" // header file
using namespace std; // namespace

class Critter // class
{
public:

    Critter() // constructor
    {
        cout << "A new critter has been created!\n"; // print the message
        CritterCount++; // increment the CritterCount
    }

    static void AnnounceCount() // static function
    {
        cout << CritterCount << endl; // print the value of CritterCount
    }
    
   static int CritterCount; // static variable 
};

int Critter::CritterCount = 0; // static variable initialization

int main() // main function
{
    Critter::AnnounceCount(); // call the function

    Critter* crit = new Critter(); // declaration and initialization
    Critter::AnnounceCount(); // call the function
    delete crit; // delete the critter
    
    system("pause"); // pause the system
}


/*
================================================================

This is extra code to demonstrate Static Variable examples:

Example 1:

void AddToCount() // function prototype
{
    static int count = 0; // static variable
    count++; // increment the count
    cout << "Count: " << count << endl; // print the count
}

int main() // main function
{
    for (int i = 0; i < 100; i++) // for loop
    {
        AddToCount(); // call the function
    }

Example 2:

class Item // class
{
public:
    Item() // constructor
    {
        cout << "An item has been created!\n"; // print the message
    }
    ~Item() // destructor
    {
        cout << "An item has been destroyed!\n"; // print the message
    }
};

int main() // main function
{
    {
        static Item item; // declaration and initialization
    }
    
    system("pause"); // pause the system
}

Example 3:

class Critter // class
{
public:
   static int CritterCount; // static variable 
};

int Critter::CritterCount = 0; // static variable initialization

int main() // main function
{
    Critter::CritterCount = 13; // assign a value to CritterCount

    cout << Critter::CritterCount << endl; // print the value of CritterCount
    
    system("pause"); // pause the system
}

Example 4:

class Critter // class
{
public:

    Critter() // constructor
    {
        cout << "A new critter has been created!\n"; // print the message
        CritterCount++; // increment the CritterCount
    }

    static void AnnounceCount()
    {
        cout << CritterCount << endl; // print the value of CritterCount
    }
    
   static int CritterCount; // static variable 
};

int Critter::CritterCount = 0; // static variable initialization

int main() // main function
{
    Critter crit; // declaration and initialization
    Critter::AnnounceCount(); // call the function
    Critter crit2; // declaration and initialization
    Critter::AnnounceCount(); // call the function
    
    
    system("pause"); // pause the system
}
    
================================================================
 */