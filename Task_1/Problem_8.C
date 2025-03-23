/*
-Write a program that prompts the user for a positive number, then using a while loop and if statement, checks if the number is perfect or not and prints the result. A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.

Input: 6
Output: 6 is a perfect number
Explanation: 6 → Divisors: 1, 2, 3 
Sum: 1 + 2 + 3 = 6

Input: 10
Output: 10 is not a perfect number
*/

#include <stdio.h>

int main (){
    int x;
    do{
        printf("Enter a Positive number: ");
        scanf("%d", &x);
    }while(x <= 0);

    int i = 1, sum = 0;
    while (i < x){
        if (x % i == 0)
            sum += i;
        i++;
    }
    printf("%d is %sperfect number", x, sum == x ? "a " : "not a ");
}