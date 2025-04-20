#include <stdio.h>

int main(){
    int a = 7;
    int *aptr = &a; // declare a pointer and initialize it with the address of the variable a

    printf("Address of a is %p\nValue of aPtr is %p\n", &a, aptr); 
    /* 
    both format specifiers are for pointers 
    and since the pointer and the operator & refer to the same location they will print the same adress twice in hexadecimal code
    -> Address of a is 0x#####
       Value of aPtr is 0x#####
       
    */

    printf("Value of a is %d\nValue of *aptr is %d\n", a, *aptr);
    /*
    since the pointer refer to the location of a, both will print the value of a twice 
    -> Value of a is 7
       Value of *aptr is 7

    */

    printf("Showing that * and & are complement of each other\n");
    /*
    (*) dereference operator used to access the value of the pointer
    (&) reference operator used to access the location (address) of a variable
    */

    printf("&*aptr = %p\n*&aptr = %p\n", &*aptr, *&aptr);
    /*
    &*aptr: get the location of the value that the pointer is refering to (hexadecimal address)
    *&aptr: print the value inside of the pointer variable (also a hexadeciaml address)
    -> &*aptr = 0x#####
       *&aptr = 0x#####

    */


}