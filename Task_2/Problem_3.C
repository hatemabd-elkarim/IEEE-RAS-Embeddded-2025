/*
    Wonderful Number:
    https://codeforces.com/group/MWSDmqGsZm/contest/223205/submission/312486690
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

char reversed[33]; // Global variable
void toReversedBinary(int N);
bool isPalindrome(int N);
int main(){
    int N;
    scanf("%d", &N);
    
    if (N % 2)
    {
        toReversedBinary(N);
        printf("%s", isPalindrome(N) ? "YES" : "NO");
    }
    else
        printf("NO");
}


void toReversedBinary(int N){ // Input: 8 -> Output: (0001 0000) instead of (0000 1000)
    for (int i = 0; i < 32; i++){
        reversed[i] = (N & 1) ? '1' : '0';
        N >>= 1;
    }
}

bool isPalindrome(int N){
    int bitsNumber = (int) ceil ((log(N+1)/log(2))); // Limits the reversed string to the miniumum number of bits to represend the number N
    reversed[bitsNumber] = '\0';
    int len = strlen(reversed);
    for (int i = 0; i < len ; i++) {
        if (reversed[i] != reversed[len - i - 1]) {
            return false;
        }
    }
    return true;
}