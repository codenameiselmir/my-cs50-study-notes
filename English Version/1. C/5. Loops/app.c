/*
========================================
Lecture 5 — Loops
Repository: my-cs50-study-notes
Directory: 1. C
========================================
*/

// Until now, we have learned how to write programs
// that execute instructions and make decisions.

// But imagine we want to print "Hello, world!" five times.

// printf("Hello, world!\n");
// printf("Hello, world!\n");
// printf("Hello, world!\n");
// printf("Hello, world!\n");
// printf("Hello, world!\n");

// This works fine. However, what if we wanted
// to print the message 100 or even 1000 times?

// Writing the same instruction again and again
// would take too much time and make our code difficult
// to maintain. That's exactly why we need loops.

/*
========================================
# WHAT ARE LOOPS?
========================================
*/

// Loops allow a program to execute the same block of code multiple times. 

// Instead of repeating instructions manually,
// we can tell the computer to repeat them for us.

// - Print a message 10 times.
// - Count numbers from 1 to 100.
// - Ask the user to enter a valid number.
// - Repeat a task until a condition is satisfied.
// - Display a list of items.

// A loop usually continues running while a particular condition is true.
// When the condition becomes false, the loop stops.

#include <stdio.h>
#include "cs50.h"

int main(void){
    /*
    ========================================
    # WHILE LOOP
    ========================================
    */

    // A while loop repeats a block of code
    // as long as its condition is true.

    // while (condition)
    // {
    //     Code to repeat.
    // }

    int counter = 1;

    while (counter <= 5)
    {
        printf("%d\n", counter);
        counter++;
    }

    // Let's understand what happens:

    // 1. counter starts with the value 1.
    // 2. The computer checks whether counter <= 5.
    // 3. If true, it prints the current value.
    // 4. counter++ increases the value by 1.
    // 5. The computer checks the condition again.
    // 6. This continues until the condition is false.

    // IMPORTANT:

    // A while loop checks its condition BEFORE
    // executing the code inside the loop.

    // If the condition is false from the beginning,
    // the loop body will not execute even once.

    /*
    ========================================
    # DO WHILE LOOP
    ========================================
    */

    // A do while loop is similar to a while loop.

    // However, there is one important difference.

    // A do while loop executes its code at least once 
    // BEFORE checking the condition.

    // do
    // {
    //     Code to repeat.
    // }
    // while (condition);

    int number = 1;

    do{
        printf("Number: %d\n", number);
        number++;
    } while(number <= 5);

    // First, the computer executes the code.
    // Then it checks whether number <= 5.
        // If the condition is true, it repeats.
        // If the condition is false, it stops.
    
    // while    -> Checks the condition first.
    // do while -> Executes once, then checks the condition.

    /*
    ========================================
    # FOR LOOP
    ========================================
    */

    // A for loop is useful when we know how many times
    // we want to repeat an operation.

    // for (initialization; condition; update)
    // {
    //     Code to repeat.
    // }

    // 1. Initialization -> Where the counter starts.
    // 2. Condition      -> When the loop should continue.
    // 3. Update         -> How the counter changes.

    for (int i = 1; i <= 5; i++){
        printf("forCounter: %d\n", i);
    }

    // int i = 1
    // Create a variable named i and start from 1.

    // i <= 5
    // Continue the loop while i is less than or equal to 5.

    // i++
    // Increase i by 1 after each iteration.

    /*
    ========================================
    # BREAK STATEMENT
    ========================================
    */

    // Sometimes we want to stop a loop
    // before its normal condition becomes false.

    // That's why we use break.

    for (int j = 1; j <= 10; j++)
    {
        if (j == 5)
        {
            break;
        }

        printf("%d\n", j);
    }

    /*
    ========================================
    # CONTINUE STATEMENT
    ========================================
    */

    // continue skips the remaining instructions
    // in the current iteration.

    // The loop then moves to its next iteration.

    for (int z = 1; z <= 5; z++)
    {
        if (z == 3)
        {
            continue;
        }

        printf("%d\n", z);
    }

    /*
    ========================================
    # NESTED LOOPS
    ========================================
    */

    // A nested loop is a loop inside another loop.

    // For example, imagine we want to print
    // a rectangle made of # characters.

    // The rectangle should have:
    // 3 rows and 5 columns.

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            printf("#");
        }

        printf("\n");
    }

    // The outer loop controls the rows.
    // The inner loop controls the columns.

    // Every time the outer loop runs,
    // the inner loop prints five # characters.

    // After that, printf("\n") starts a new line.
    // This process repeats three times.
}