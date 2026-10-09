/*
========================================
Lecture 2 — Variable & Data Types
Repository: my-cs50-study-notes
Directory: 1. C
========================================
*/

// Imagine we write a program like this:

// printf("Ali is 25 years old.\n");
// printf("Ali will be 26 years old next year.\n");

// The program works fine. However, we have written the age directly into the text.
// If we wanted to change Ali's age to 30, we might have to update it in several different places.

// That’s exactly why we use variables: to avoid problems like this.

/*
========================================
# WHAT IS VARIABLE?
========================================
*/

// A variable is like a box where we temporarily store a piece of information.

// int age = 25;

// age = the name of our box;
// 25 = the value stored inside the box;
// int (integer) = tells the computer that this box will store a whole number.

// So, what we are really saying is: “Create a space called age and store the value 25 inside it.”

#include <stdio.h>
#include "cs50.h"

int main(void){
    /*
    ========================================
    # WHAT ARE DATA TYPES?
    ========================================
    */

    // A data type is a way of telling the computer what kind of information 
    // we want to store in a variable. In other words, the data type determines 
    // what kind of value the variable can hold.

    // int age = 25;

    // Here, we are telling the computer: 
    // "Create a variable called age and store an integer in it."

    /*
    ========================================
    # INTEGER
    ========================================
    */

    // int, which stands for integer, is used for whole numbers that don't 
    // require decimal values, such as age, number of products, or number of students. 
    
    // The format specifier for an integer is %d.

    int studentCount = 30;
    printf("Student Count: %d\n", studentCount);
    
    /*
    ========================================
    # FLOAT
    ========================================
    */

    // float is used for decimal numbers, such as height, price, or temperature.
    
    // The format specifier for a float is %f.

    float price = 19.99f;
    printf("Price: %f\n", price);

    /*
    ========================================
    # DOUBLE
    ========================================
    */

    // double is also used for decimal numbers, but it can store values with more 
    // precision than float. It is useful when we need more accurate decimal values. 
    
    // The format specifier for a double is %f.

    double pi = 3.1415926535;
    printf("Pi: %f\n", pi);

    /*
    ========================================
    # CHAR
    ========================================
    */

    // char, which stands for character, is used to store a single character,
    // such as a letter, number, or symbol. 
    
    // The format specifier for a char is %c.

    char grade = 'A';
    printf("Grade: %c\n", grade);

    /*
    ========================================
    # BOOLEAN
    ========================================
    */

    // bool, which stands for boolean, is used for values that can only be true or false.
    // In C, true is represented as 1 and false as 0. 
    
    // The format specifier commonly used for a bool is %d.

    bool isStudent = true;
    printf("Is Student: %d", isStudent);

    /*
    ========================================
    # STRING (WITHOUT LIBRARY)
    ========================================
    */

    // In C, a string is an array of characters (char).
    // Strings are written inside double quotes ("").

    // The format specifier used for strings is %s.

    char nameChar[] = "Ali";

    printf("Name: %s\n", nameChar); // Ali
    printf("First Character: %c\n", nameChar[0]); // A

    /*
    ========================================
    # STRING (WITH CS50 LIBRARY)
    ========================================
    */

    // The cs50.h library provides a string data type.
    // It allows us to declare strings more easily.

    // The format specifier for strings is %s.

    string nameString = "Ali";
    string city = "Baku";

    printf("Name: %s\n", nameString); // Ali
    printf("City: %s\n", city); // Baku
}