/*
Problem 1 
-Write a program that takes any numbers from user terminates if user enters -1  
then prints largest and smallest number

EX:
Input : 5 9 12 100 3 8 0 -1
Output : 100 0
*/

#include <stdio.h>
int main(){
    int x, max, min;
    scanf("%d", &x);
    if (x != -1){
        max = x, min = x;
    }else{
        printf("No Numbers provided");
        return 1;
    }
    
    while(x != -1){
        if (x > max)
            max = x;
        if (x < min)
            min = x;
        scanf("%d", &x);
    }
    printf("%d %d", max, min);
    return 0;
}