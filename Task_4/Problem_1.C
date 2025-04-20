/*
-Write a C program to create, initialize and demonstrate the use of pointers. 
How to access  values and addresses using a pointer variable in C programming.
(Try it with: int, char, float, long)
*/

#include <stdio.h>

int main(){
    // * is used for initializing pointer for each data type
    int *num; // initialize a pointer for an integer 
    float *real; // initialize a pointer for a float
    char *ch; // initialize a pointer for a character
    long *lnum; // initialize a pointer for a long

    // Determination the data type for a pointer is essential for the compiler to know how to change the address this pointer holds:
    printf("%p\n", num); // print the address that the pointer holds in hexadecimal
    num++; // shift the pointer by 4 bytes (int)
    printf("%p\n", num); 
    num--; // shift the pointer back by 4 bytes (int)
    printf("%p\n", num); 

    printf("%p\n", real); 
    real++; // shift the pointer by 8 bytes (long)
    printf("%p\n", real); 
    real--; // shift the pointer back by 8 bytes (long)
    printf("%p\n", real); 

    // * is also used to access the value that pointer refers to
    *num = 5;
    printf("%d\n", *num); // output: 5
    (*num)++; // you should use paranthesis if you want to use the value for which the pointer is referring
    printf("%d\n", *num); // output: 6
    *num++; // this increments the address not the value
    printf("%p\n", num);
    *num--;

    // & is used to access the adress for a variable "its first byte" so you can use it to initialize a pointer:
    int x = 5;
    printf("%p\n", &x);
    num = &x; // Be careful in such line beacuse it wastes the value that pointer num was refering to
    printf("%p\n", num);  
    (*num)--; // since the pointer now refers to the variable x; any change in the value of num will reflected on x
    printf("%d\n", x); // output: 4
    
    // you can also use pointers with arrays knowing that the address of the array "its first index address" is given by its name
    int numbers[5] = {1,2,3,4,5};
    int *ptr = numbers; // initialize the pointer with the address of the array
    printf("%d ", *ptr); // output: 1
    printf("%d ", *(ptr + 1)); 
    printf("%d ", *(ptr + 2));
    printf("%d ", *(ptr + 3));
    printf("%d ", *(ptr + 4));
    printf("\n");

    // you can also access pointer with square brackets
    printf("%d\n", num[0]); // output: 4
    //printf("%d\n", num[1]); --> output: unkown
    printf("%d ", ptr[0]); // output: 1
    printf("%d ", ptr[1]); 
    printf("%d ", ptr[2]);
    printf("%d ", ptr[3]);
    printf("%d ", ptr[4]);
    printf("\n");
    
}