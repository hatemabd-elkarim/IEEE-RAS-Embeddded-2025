/*
-Write a program in c to make a simple calculator that performs different arithmetic operations 
(e.g., addition, subtraction, multiplication, division) using a pointer to a function. 
The challenge is to dynamically select the operation at runtime based on user input. Use Switch Case instead of If statements.
*/

#include <stdio.h>

float sum(float a, float b) {return a+b;}
float sub(float a, float b) {return a-b;}
float mul(float a, float b) {return a*b;}
float div(float a, float b) {return a/b;}

int main(){
    float (*ptrfun[4])(float,float) = {sum,sub,mul,div};
    int choice;
    float first,second;
    printf("Select an Operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &first, &second);
    printf("Result: %f", ptrfun[choice-1](first,second));

}