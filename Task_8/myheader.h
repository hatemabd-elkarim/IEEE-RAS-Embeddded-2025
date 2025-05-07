/*
-Create a custom header file that defines a structure and declares multiple related mathematical functions, implement these functions 
in a separate source file using both structure-based and standard parameter approaches, 
and use them in a main program to perform operations like addition, multiplication, and exponentiation.

• The struct is intended to group two integer values that are commonly used together in mathematical operations.
• Mathematical functions will be: addition, substraction,  multiplication, division (handle divide-by-zero cases), and exponentiation.
*/

#ifndef MYHEADER_H
#define MYHEADER_6_H

    typedef struct{
        int first;
        int second;
    }operands;

    int add(operands values);
    int subtract(operands values);
    int multiply(operands values);
    int divide(operands values);
    int power(operands values);

#endif