/*
========================================
Lecture 4 — Conditionals
Repository: my-cs50-study-notes
Directory: 1. C
========================================
*/

// Until now, our programs have executed instructions
// one after another, from top to bottom.

// int age = get_int("How old are you? ");
// printf("You are %d years old.\n", age);

// But what if we want our program to behave differently
// depending on the age entered by the user?

// - If the user is 18 or older, display "You are an adult."
// - Otherwise, display "You are under 18."

// That's exactly why we need conditionals.

/*
========================================
# WHAT ARE CONDITIONALS?
========================================
*/

// Instead of always executing the same instructions,
// our program can choose what to do based on a condition.

// A condition is an expression that can be either:

// true  -> The condition is satisfied.
// false -> The condition is not satisfied.

// 25 > 18   -> true
// 10 > 18   -> false
// 20 == 20  -> true

// Using conditionals, we can control which parts
// of our code should be executed.

/*
========================================
# COMPARISON OPERATORS
========================================
*/

// Before writing conditions, we need to understand
// how to compare values.

// Comparison operators allow us to compare two values.

// == Equal to
// != NOT Equal to
// > Greater than
// < Less than
// >= Greater than or equal to
// <= Less than or equal to

// IMPORTANT:

// =  is used to assign a value to a variable.
// == is used to compare two values.

// For example:

// int age = 25;  -> Store 25 inside age.
// age == 25      -> Check whether age equals 25.

#include <stdio.h>
#include "cs50.h"

int main(void){
    /*
    ========================================
    # IF STATEMENT
    ========================================
    */

    // The if statement allows us to execute code
    // only when a condition is true.

    // if (condition)
    // {
    //     Code to execute when the condition is true.
    // }

    int age = get_int("How old are you? ");

    if (age >= 18)
    {
        printf("You are an adult.\n");
    }

    // If true, the code inside the curly braces runs.
    // If false, the code inside the braces is skipped.

    /*
    ========================================
    # IF ELSE STATEMENT
    ========================================
    */

    // Sometimes we want to do something when a condition
    // is true, but something different when it is false.

    // if (condition)
    // {
    //     Code when the condition is true.
    // }
    // else
    // {
    //     Code when the condition is false.
    // }

    int temperature = get_int("Enter temperature: ");

    if (temperature >= 25)
    {
        printf("The weather is warm.\n");
    }
    else
    {
        printf("The weather is not warm.\n");
    }

    /*
    ========================================
    # ELSE IF STATEMENT
    ========================================
    */

    // What if we need to check more than two possibilities?

    // For example, imagine we want to classify
    // a student's exam score.

    // 90 or above -> Excellent
    // 70 to 89    -> Good
    // 50 to 69    -> Passed
    // Below 50    -> Failed

    // We can use else if to check multiple conditions.

    int score = get_int("Enter your exam score: ");

    if (score >= 90)
    {
        printf("Excellent!\n");
    }
    else if (score >= 70)
    {
        printf("Good!\n");
    }
    else if (score >= 50)
    {
        printf("Passed!\n");
    }
    else
    {
        printf("Failed!\n");
    }

    // IMPORTANT: The order of conditions matters.

    // If we checked score >= 50 first, a score of 95
    // would immediately match that condition.

    /*
    ========================================
    # LOGICAL OPERATORS
    ========================================
    */

    // Sometimes one comparison is not enough.
    // We may need to combine multiple conditions.
    // Logical operators help us do that.

    // &&   AND
    // ||   OR
    // !    NOT

    /*
    ========================================
    # AND OPERATOR (&&)
    ========================================
    */

    // && requires both conditions to be true.

    // Imagine a course is available only for people
    // between 18 and 30 years old.

    int studentAge = get_int("Enter your age: ");

    if (studentAge >= 18 && studentAge <= 30)
    {
        printf("You can join the course.\n");
    }
    else
    {
        printf("You cannot join the course.\n");
    }

    // Both conditions must be true:

    // 25 >= 18  -> true
    // 25 <= 30  -> true

    // If either condition is false, the result is false.

    /*
    ========================================
    # OR OPERATOR (||)
    ========================================
    */

    // || requires at least one condition to be true.

    // Imagine we accept both 'Y' and 'y'
    // as a positive answer.

    char answer = get_char("Do you agree? (Y/N): ");

    if (answer == 'Y' || answer == 'y')
    {
        printf("You agreed.\n");
    }
    else
    {
        printf("You did not agree.\n");
    }

    // The conditions are:

    // answer == 'Y' -> false
    // answer == 'y' -> true

    // Only one condition needs to be true.

    /*
    ========================================
    # NOT OPERATOR (!)
    ========================================
    */

    // ! is used to reverse a boolean value.

    // true becomes false.
    // false becomes true.

    // Imagine we want to check whether
    // a user is not registered.

    bool isRegistered = false;

    if (!isRegistered)
    {
        printf("Please register first.\n");
    }

    // We can read !isRegistered as "not registered".

    /*
    ========================================
    # SWITCH STATEMENT
    ========================================
    */

    // switch is another way to make decisions.

    // It is useful when we want to compare one value
    // against several specific possibilities.

    // - switch checks the value of option.
    // - case defines a possible matching value.
    // - break stops execution from continuing into the next case.
    // - default runs when no case matches.

    // Unlike else if, switch is mainly useful
    // for checking specific values.

    int option = get_int("Choose an option (1-3): ");

    switch (option)
    {
        case 1:
            printf("You selected Profile.\n");
            break;

        case 2:
            printf("You selected Settings.\n");
            break;

        case 3:
            printf("You selected Logout.\n");
            break;

        default:
            printf("Invalid option.\n");
            break;
    }
}