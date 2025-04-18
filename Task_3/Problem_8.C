/*
    count words:
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316052370
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char s[1000000];
    scanf("%[^\n]", s); // read all charachters except new line
    int words = 0;
    int len = strlen(s);

    for(int i = 0; i < len - 1; i++){
        if (isalpha(s[i]) && (s[i+1] == ' ' ||  s[i+1] == '!' || s[i+1] == '?' || s[i+1] == '.' || s[i+1] == ','))
        words++; 
    }
    if (isalpha (s[len-1])) words++; 
    printf("%d", words);
}