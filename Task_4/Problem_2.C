/*
-Write a C program to read two numbers from user and add them using pointers. 
How to find sum of two number using pointers in C programming. 
Program to perform arithmetic operations on number using pointers.

Input:
num1: 10
num2: 20

Output:
Sum = 30
Difference = -10
Product = 200
Quotient = 0
*/

#include <stdio.h>

int main(){
    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("num1: ");
    scanf("%d", ptr1); 
    printf("num2: ");
    scanf("%d", ptr2);

    printf("Sum = %d\n", *ptr1 + *ptr2 );
    printf("Difference = %d\n", *ptr1 - *ptr2 );
    printf("Product = %d\n", *ptr1 * *ptr2 );
    if (*ptr2 == 0){
        printf("Division by zero is not allowed");
        return 0;
    }
    printf("Quotient = %d\n", *ptr1 / *ptr2 );


}