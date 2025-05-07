/*
-Create two Functions one adds two integer values and the other subtracts them,
Control the code functionality using the same switch concept of the previous problem 
and you must implement the two operations with the macros-like functions NOT the regular function implementation.
*/
#include <stdio.h>

#define ADDition // you can comment this define to test sub

#define ADD(x,y) (x+y)
#define SUB(x,y) (x-y)

int main(){
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x,&y);

    #ifdef ADDition
        result = ADD(x,y);
        printf("Sum: %d\n", result);
    #else
        result = SUB(x,y);
        printf("Difference: %d\n", result);
    #endif
    
    return 0;
}