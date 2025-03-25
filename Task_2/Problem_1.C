/*
-Write a program that defines a function that takes two integers as input, checks if the first number is divisible by the second number 
and returns the result. Then call the function in the main function and print the result. 

Input: 
5 10 
Output: 
5 is not divisible by 10
*/

#include <stdio.h>

bool isDivisible(int x, int y);
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d is %sdivisble by %d",x, isDivisible(x,y) ? "":"not ", y);

}
bool isDivisible(int x, int y){
    if (x % y == 0)
        return true;
    else 
        return false;
        
}