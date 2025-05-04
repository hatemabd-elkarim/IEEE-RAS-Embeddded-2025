/*
 -Create a program that uses a union to store different types of data (integer, float, and character), then:
• Assign a value to a, then print all three members (a, b, and c)
•Assign a value to b, then again print all three members
•Assign a value to c, then again print all three members
After each assignment, print all the values and demonstrate how changing one value affects the others due to memory sharing. 

*/

#include <stdio.h>
 
union abc{
    int a;
    float b;
    char c;
}var;

int main(){
    var.a = 65;
    printf("%16d\t%16f\t%16c\n", var.a, var.b, var.c); 

    var.b = 66;
    printf("%16d\t%16f\t%16c\n", var.a, var.b, var.c);

    var.c = 67;
    printf("%16d\t%16f\t%16c\n", var.a, var.b, var.c);

    /* all data members of a union have the same base address so any change of one them will affect the other members 
    making the output unpredictable if you are using data types of different systems like integer and floating point number
    */
}