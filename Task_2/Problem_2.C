/*
-Write a function to print all Armstrong numbers between given intervals in C programming.

Input
lower limit: 1
upper limit: 1000

Output
Armstrong numbers between 1 to 1000 are: 1, 153, 370, 371, 407.

Ex for Armstrong Number:
For 3-digit numbers (153):
1^3 + 5^3 + 3^3  = 1 + 125 + 27 = 153
*/

//A number “N” is an Armstrong number if “N” is equal to the sum of all N’s digits raised to the power of the number of digits in N.

#include <stdio.h>
#include <math.h>

void printArmStrong(int lowerLimit, int upperLimit);
int main (){
    int lowerLimit, upperLimit;
    printf("Lower Limit: ");
    scanf("%d", &lowerLimit);
    do{
        printf("UpperLimit: ");
        scanf("%d", &upperLimit);
    }while(lowerLimit >= upperLimit);
    
    printArmStrong(lowerLimit, upperLimit);
}

void printArmStrong(int lowerLimit, int upperLimit){

    int temp, count = 0, sum = 0;
    bool first = true, empty = true;
    
    for (int i = lowerLimit; i <= upperLimit; i++){
        // count the number of digits
        temp = i;
        count = 0;
        while(temp > 0){
            count++;
            temp = temp / 10;
        }
        // calculate the sum of powers
        temp = i;
        sum = 0;
        while(temp > 0){
            sum += (int) round (pow(temp % 10, count));
            temp = temp / 10;
        }

        if (first && sum == i){
            printf("Armstrong numbers between %d to %d are: %d", lowerLimit, upperLimit, i);
            first = false;
            empty = false;
        }
        else if (sum == i)
        printf(", %d", i);
           
    }
    if (empty)
    printf("There are no Armstrong numbers between %d to %d.", lowerLimit, upperLimit);
    else
    printf(".");

}