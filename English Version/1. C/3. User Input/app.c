/*
========================================
Lecture 3 — User Input
Repository: my-cs50-study-notes
Directory: 1. C
========================================
*/

// Until now, we have written programs where values are already
// defined inside our code. For example:

// int age = 25;
// printf("Age: %d\n", age);

// This works fine. However, every time we run the program,
// it will display the same age.

// What if we want the user to enter their own age?
// That's exactly why we need user input.

/*
========================================
# WHAT IS USER INPUT?
========================================
*/

// User input allows a program to receive information from the user
// while the program is running. Instead of writing values directly 
// into our code, we can ask the user to provide them.

// - What is your name?
// - How old are you?
// - What is your height?
// - What is your grade?

// The computer receives these answers and stores them in variables
// so we can use them later in our program.

/*
========================================
# CS50 LIBRARY
========================================
*/

// C provides standard ways to read user input, but some of them
// can be difficult to understand when we are just starting.

// The CS50 library makes this process much easier.

// By including cs50.h, we can use special functions to ask
// the user for different types of information.

// Some of the most useful functions are:

// get_string()   -> Text
// get_int()      -> Whole numbers
// get_float()    -> Decimal numbers
// get_double()   -> More precise decimal numbers
// get_char()     -> A single character
// get_long()     -> Larger whole numbers

// These functions belong to the CS50 library.
// They are not part of standard C.

/*
========================================
# HOW DOES USER INPUT WORK?
========================================
*/

// Let's imagine we write:

// int age = get_int("How old are you? ");

// Here is what happens:

// 1. The program displays "How old are you? "
// 2. The program waits for the user to enter a number.
// 3. The user types 25 and presses Enter.
// 4. get_int() receives the number 25.
// 5. The value 25 is stored inside the age variable.

// Now we can use age just like any other integer variable.

// Notice the difference:

// int age = 25;
// The programmer provides the value.

// int age = get_int("How old are you? ");
// The user provides the value.

#include <stdio.h>
#include "cs50.h"

int main(void){
    /*
    ========================================
    # GET_STRING
    ========================================
    */

    // get_string() is used to receive text from the user.

    // The information entered by the user is stored
    // inside a string variable. For example:

    string nameString = get_string("What's your name?\n");
    printf("Hello, %s!\n", nameString);

    /*
    ========================================
    # GET_INT
    ========================================
    */

    // get_int() is used to receive whole numbers from the user.

    // It is useful for values such as age, number of students,
    // or number of products. The value is stored inside an int variable.

    int age = get_int("How old are you? ");
    printf("You are %d years old.\n", age);

    /*
    ========================================
    # GET_FLOAT
    ========================================
    */

    // get_float() is used to receive decimal numbers.

    // It is useful for values such as height, price,
    // or temperature. The value is stored inside a float variable.

    float height = get_float("What is your height in meters? ");
    printf("Your height is %f meters.\n", height);

    /*
    ========================================
    # GET_DOUBLE
    ========================================
    */

    // get_double() also receives decimal numbers.

    // However, double can represent values with more
    // precision than float. The value is stored inside 
    // a double variable.

    double number = get_double("Enter a decimal number: ");
    printf("Your number is %f\n", number);

    /*
    ========================================
    # GET_CHAR
    ========================================
    */

    // get_char() is used to receive a single character.

    // It is useful for values such as a letter, grade,
    // or a simple answer like Y or N. The value is stored 
    // inside a char variable.

    char grade = get_char("What is your grade? ");
    printf("Your grade is %c\n", grade);

    /*
    ========================================
    # GET_LONG
    ========================================
    */

    // get_long() is used to receive whole numbers that
    // may be too large to fit inside an int. The value is 
    // stored inside a long variable.

    long population = get_long("Enter a population: ");
    printf("Population: %ld\n", population);
}