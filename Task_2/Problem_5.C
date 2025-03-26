
/*
    Print Digits using recurion
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312504769
*/
#include <stdio.h>

void scan(int N);
void printDigits(long long num);
int main(){
    int N;
    scanf("%d", &N);
    scan(N);
}
void scan(int N){
    if (N <= 0)
        return;
    long long num;
    scanf("%lld", &num);
    if (num == 0)
        printf("0");
    else
        printDigits(num);
    printf("\n");
    scan(N-1);
}
void printDigits(long long num){
    if (num == 0){
        return;
    }
    printDigits(num / 10);
    printf("%lld ", num % 10);
}