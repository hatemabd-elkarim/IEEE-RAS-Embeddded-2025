/*
-Create a custom header file that defines a structure and declares multiple related mathematical functions, 
implement these functions in a separate source file using both structure-based and standard parameter approaches, 
and use them in a main program to perform operations like addition, multiplication, and exponentiation.

• The struct is intended to group two integer values that are commonly used together in mathematical operations.
• Mathematical functions will be: addition, substraction,  multiplication, division (handle divide-by-zero cases), and exponentiation.

*/

#include <stdio.h>
#include "myheader.h"

int main(){
    operands pair;
    printf("Enter two numbers: ");
    scanf("%d %d", &pair.first, &pair.second);

    printf("Sum = %d\n", add(pair));
    printf("Difference = %d\n", subtract(pair));
    printf("Multipication = %d\n", multiply(pair));
    printf("Division = %d\n", divide(pair));
    printf("Power = %d", power(pair));
}

