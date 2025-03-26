/*
-Write a recursive function in C to find the Greatest Common Divisor (GCD), 
also known as the Highest Common Factor (HCF), of two given numbers.

Input
first number: 10
second number: 15

Output
GCD of 10 and 15 = 5 
*/

int gcd(int min, int max);
#include <stdio.h>

int main(){
    int first, second;
    printf("first number: ");
    scanf("%d", &first);
    printf("second number: ");
    scanf("%d", &second);
    int min = first <= second ? first : second;
    int max = first >= second ? first : second;
    printf("%d", gcd(min, max));
} 
int gcd(int min, int max){
    if (min == 0)
        return max;
    return (max % min, min);
}