/*
    Divisors:
    https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/311896155
*/
#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        if (N % i == 0)
            printf("%d\n", i);
    }
}