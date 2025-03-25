/*
    The Last 2 digits:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/311606498
*/
#include <stdio.h>
#include <math.h>

int main(){
    long numbers[4];
    scanf("%ld %ld %ld %ld", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);
    
    int remainders[4];
    for (int i = 0; i < 4; i++)
        remainders[i] = numbers[i] % 100;
    // remainder(a*b*c*d) = remainder (remainder(a) * reminder(b) * remainder(c) * remainder(d))
    int remainder = (remainders[0] * remainders[1] * remainders[2] * remainders[3]) % 100;
    
    /*if (remainder < 10){
        printf("0%d", remainder);
        return 0;
    }  
    printf("%d", remainder);
    */
   // better to use printf("%0d")
   printf("%02d", remainder);

}
