/*
-Write a program that prompts the user for a positive integer, then checks if the sum of its digits is a prime number. 
The program should use a loop to extract digits and determine whether the sum is prime.

Example 1:
Input: 47
Sum of digits: 4 + 7 = 11
Output: "The sum of digits (11) is a prime number."

Example 2:
Input: 39
Sum of digits: 3 + 9 = 12
Output: "The sum of digits (12) is not a prime number."
*/
#include <stdio.h>

int main(){
    int x;
    do {
        printf("Enter a postive number: ");
        scanf("%d", &x);
    }while (x <= 0);

    int sum = 0, temp = x;
    while (temp > 0){
        sum += (temp % 10);
        temp = temp / 10;
    }
    printf("The sum of digits (%d) is ", sum);
    if (sum == 1) {
        printf("not a prime number.");
        return 0;
    }

    for (int i = 2; i < sum; i++){
        if (sum % i == 0){
            printf("not a prime number.");
            return 0;
        } 
    }
    printf("a prime number.");
    return 0;

}