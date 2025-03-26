/*
    3n+1 sequence:
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312628315
*/
#include <stdio.h>
int sequence(int N);
int main(){
    int N;
    scanf("%d", &N);
    printf("%d", sequence(N));
}

int sequence(int N){
    if (N == 1)
        return 1;
    if (N % 2)
         return 1 + sequence (3 * N + 1);
    else 
         return 1 + sequence (N / 2);
}