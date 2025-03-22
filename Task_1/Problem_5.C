/*
    Sequence of Numbers and sum:
    https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/311875968
*/
#include <stdio.h>

int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    while(N > 0 && M > 0){
        int min = N < M ? N : M;
        int max = N > M ? N : M;
        int sum = 0;
        for(int i = min; i <= max; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
        scanf("%d %d", &N, &M);
    }
}