#include "iostream" // header file
using namespace std; // namespace

void welcome(); // function prototype

char getYesNo(); // function prototype

void printResponse(char reponseToPrint); // function prototype

void AskYesOrNoQuestion(); // function prototype

int main() // main function
{
    // Asks user to enter y or n and then returns the response
    AskYesOrNoQuestion(); // call the function
    
    system ("pause"); // pause the system
}

void welcome() // function
{
    // Welcome the user to the program
    cout << "Welcome! \n"; // print the welcome message
}

char getYesNo()
{
    // Ask the user yes or no?
    cout << "Please answer y or n.\n"; // prompt the user

    // char variable to store the response
    char response; // declaration

    // get input from the user via the keyboard
    cin >> response; // get the response

    return response; // return the response
}

void printResponse(char reponseToPrint)
{
    // Print the response to the screen
    cout << "Your answer was: " << reponseToPrint << endl; // print the response
}

void AskYesOrNoQuestion() // function
{
    // Greet the user
    welcome(); // call the function

    // create char variable to store the result from get yes no
    // getYesNo() gets a y or n from the user
    char answer = getYesNo(); // call the function

    // Return the response to the user on the screen
    printResponse(answer); // call the function
}