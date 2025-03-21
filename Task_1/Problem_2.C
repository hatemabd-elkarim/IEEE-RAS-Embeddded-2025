/*
    Age in days:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/311603147
 */

#include <stdio.h>

int main(){
    int N, years = 0, months = 0, days = 0;
    scanf("%d", &N);
    while(N > 0){
        if (N >= 365){
            N -= 365;
            years++;
        }else if(N >= 30){
            N -= 30;
            months++;
        }else{
            days = N;
            N = 0;
        }
            
    }
    printf("%d years\n%d months\n%d days", years, months, days);
}