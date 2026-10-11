/*
========================================
Lecture 6 — Functions
Repository: my-cs50-study-notes
Directory: 1. C
========================================
*/

// Until now, we have written most of our code
// inside the main function.

// int main(void)
// {
//     printf("Hello, Ali!\n");
//     printf("Hello, Murad!\n");
//     printf("Hello, Leyla!\n");
// }

// This works fine. However, imagine we need to
// display the same message in different parts
// of our program.

// We could write the same printf() statement
// again and again.

// But what if we want to change that message later?

// We would have to find and update every place
// where we used it. That's exactly why we need functions.

/*
========================================
# WHAT IS A FUNCTION?
========================================
*/

// A function is a reusable block of code
// designed to perform a specific task.

// Instead of writing the same instructions
// multiple times, we can place them inside
// a function and use that function whenever needed.

// For example, a function might:

// - Print a message.
// - Calculate the sum of two numbers.
// - Check whether a number is even.
// - Ask the user for information.
// - Calculate the square of a number.

// Functions help us:

// - Avoid repeating the same code.
// - Organize our programs.
// - Make code easier to read.
// - Make code easier to maintain.
// - Break large problems into smaller tasks.

/*
========================================
# FUNCTION STRUCTURE
========================================
*/

// A function usually has the following structure:

// return_type function_name(parameters)
// {
//     Code to execute.
// }

// Let's understand each part.

// return_type
// Specifies what type of value the function returns.

// function_name
// The name we use to identify and call the function.

// parameters
// Values the function can receive from another part
// of the program.

// { }
// The curly braces define the function body.

// For example:

// void say_hello(void)
// {
//     printf("Hello, world!\n");
// }

// Here:

// void       -> The function does not return a value.
// say_hello  -> The name of the function.
// (void)     -> The function receives no parameters.
// { }        -> The body of the function.

// IMPORTANT:

// Creating a function does not automatically execute it.
// We must call the function to run its instructions.

/*
========================================
# FUNCTION PROTOTYPES
========================================
*/

// In C, a function must be declared before it is used.

// A function prototype tells the compiler
// that a function exists and describes how to call it.

// void say_hello(void);

// - The function is named say_hello.
// - It receives no parameters.
// - It does not return a value.

// We can write function prototypes before main
// and define the actual functions after main.

// This keeps our program organized.

#include <stdio.h>
#include <stdbool.h>
#include "cs50.h"

// Function prototypes

void say_hello(void);
int square(int number);
bool is_even(int number);

int main(void){
    /*
    ========================================
    # CALLING A FUNCTION
    ========================================
    */

    say_hello();

    // When the computer reaches say_hello(),
    // it executes the instructions inside that function.

    // After the function finishes, execution continues
    // from where the function was called.

    // We can call the same function multiple times.

    say_hello();
    say_hello();

    // Notice that we did not need to repeat
    // the printf() instruction ourselves.

    /*
    ========================================
    # FUNCTIONS WITH RETURN VALUES
    ========================================
    */

    // Until now, our functions have only
    // displayed information.

    // But sometimes we want a function to calculate
    // something and give the result back to us.

    // That's why we use return.

    int result = square(5);
    printf("Square: %d\n", result);

    // Let's understand what happens:

    // 1. We call square(5).
    // 2. The number 5 is passed to the function.
    // 3. The function calculates 5 * 5.
    // 4. The function returns 25.
    // 5. The value 25 is stored inside result.
    // 6. printf() displays the result.

    /*
    ========================================
    # FUNCTIONS WITH CONDITIONALS
    ========================================
    */

    // Functions can also contain conditions.

    // Imagine we want to check whether a number is even.
    // An even number is divisible by 2 without a remainder.

    int value = get_int("Enter a number: ");

    if (is_even(value))
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}

void say_hello(void)
{
    printf("Hello, world!\n");
}

int square(int number)
{
    int result = number * number;

    return result;
}

bool is_even(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}