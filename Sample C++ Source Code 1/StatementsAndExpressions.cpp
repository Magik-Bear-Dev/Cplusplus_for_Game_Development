#include <iostream> // header file

/* Statements are fragments of the C++ program that are executed in sequence.
The body of any function is a sequence of statements. 
For example: */

int main() // main function
{
    int n = 1;                        // declaration statement
    n = n + 1;                        // expression statement
    std::cout << "n = " << n << '\n'; // expression statement
    return 0;                         // return statement
}

/*An expression is a sequence of operators and their operands, that specifies a computation.

Expression evaluation may produce a result(e.g., evaluation of 2 + 2 produces the result 4) and may generate side - effects(e.g.evaluation of std::printf("%d", 4) prints the character '4' on the standard output). 

Each C++ expression is characterized by two independent properties : A type and a value category. */

// for example

int num1 = 0; // declaration and initialization
num1 += 1; // Case 1: the constituent expression of `num += 1` is `num += 1`
int arr2[2] = { 2, 22 }; // Case 2: the constituent expressions
                      //         of `{2, 22}` are `2` and `22`
                      // Case 3: the constituent expressions of ` = {2, 22}`
                      //         are the constituent expressions of `{2, 22}`
                      //         (i.e. also `2` and `22`)