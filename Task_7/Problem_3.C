/*
-Write a C Program to Add Two Complex Numbers by Passing Structure to a Function and make use of typedef keyword in your code
*/

#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
}complex;

complex addComplex(complex num1, complex num2);
int main(){
    complex num1 = {2.5,3.5};
    complex num2 = {7,6};
    complex sum = addComplex(num1,num2);
    printf("Real: %f\nImaginary: %f", sum.real, sum.imaginary);
}
complex addComplex(complex num1, complex num2){
    // return complex{num1.real + num2.real, num1.imaginary + num2.imaginary}; Not C standard "Anonymous object"
    complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}