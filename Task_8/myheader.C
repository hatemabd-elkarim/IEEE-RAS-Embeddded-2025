/*
-Create a custom header file that defines a structure and declares multiple related mathematical functions, implement these functions 
in a separate source file using both structure-based and standard parameter approaches, 
and use them in a main program to perform operations like addition, multiplication, and exponentiation.

• The struct is intended to group two integer values that are commonly used together in mathematical operations.
• Mathematical functions will be: addition, substraction,  multiplication, division (handle divide-by-zero cases), and exponentiation.
*/

#include <stdio.h>
#include <math.h>
#include "myheader.h"

int add(operands values) {return values.first + values.second;}
int subtract(operands values) {return values.first - values.second;}
int multiply(operands values) {return values.first * values.second;}
int divide(operands values) 
    {
        while(values.second == 0) {
            printf("Divion by zero is not allowed, enter another divisor: ");
            scanf("%d",&values.second);
        }
        return values.first / values.second;
    }
int power(operands values) {return round(pow(values.first,values.second));}
