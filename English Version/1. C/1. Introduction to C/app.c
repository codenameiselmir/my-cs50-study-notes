/*
========================================
Lecture 1 — Introduction to C
Repository: my-cs50-study-notes
Directory: 1. C
========================================
*/

// There are easier programming languages to start writing applications
// with today. However, C is extremely useful for learning computer science 
// because it exposes many concepts that other languages often hide.

// When learning C, we begin to understand:
// - How is information stored in memory?
// - What is a variable really?
// - How does a computer access memory?
// - Why do certain bugs happen?
// - How do data structures work internally?

/*
========================================
# WHAT IS C?
========================================
*/

// C gives programmers much more control over the computer compared to
// many higher-level programming languages.

// With C, we can learn important concepts such as:

// - variables;
// - data types;
// - conditions;
// - loops;
// - functions;
// - arrays;
// - strings;
// - memory;
// - pointers;
// - algorithms;
// - data structures.

// C does not hide as many details from the programmer. Because of this, 
// it is especially useful for understanding how computers work internally.

// C is:

// - A general-purpose programming language;
// - A text-based programming language;
// - A compiled programming language;
// - A procedural programming language;
// - Relatively close to computer hardware;
// - Powerful and efficient;
// - One of the most influential languages in computer science.

// Most importantly, learning C helps us move from simply writing code to
// understanding how code actually works inside a computer.

/*
========================================
# INCLUDE
========================================
*/

// #include tells C that we want to use functionality from the Standard
// library. The stdio.h library provides useful functions such as: printf() 
// which allows us to display output on the screen.

/*
========================================
# MAIN FUNCTION
========================================
*/

// int main(void) is the function where the execution of a C program normally 
// begins. When the program starts, the computer begins executing the instructions
// inside main. The curly braces:

// {
//    ...
// }

// define the body of the function.

/*
========================================
# PRINTF
========================================
*/

// printf("Hello, world!"); is a function used to print formatted output to the screen.

#include <stdio.h>

int main(void){
    
    /*
    ========================================
    # PRINTF
    ========================================
    */

    // printf("Hello, world!"); is a function used to print formatted output to the screen.
    printf("Hello, world!");

    /*
    ========================================
    # ESCAPE SEQUENCES
    ========================================
    */

    // Escape sequences are special character combinations that begin with
    // a backslash. They allow us to represent characters that are difficult 
    // or impossible to write directly inside strings.

    // The most important ones to remember are:

    // \n      New line
    // \t      Tab
    // \"      Double quote
    // \\      Backslash

    printf("\nEscape Sequence Test! - New Line\n");
    printf("Escape Sequence Test2\n");

    printf("Escape Sequence Test! - Tab\n");
    printf("\tEscape Sequence Test2\n");

    printf("Escape Sequence Test! - Double Quote\n");
    printf("\"Escape Sequence Test2\"\n");

    printf("Escape Sequence Test! - Backslash\n");
    printf("\\Escape Sequence Test2\n");
}