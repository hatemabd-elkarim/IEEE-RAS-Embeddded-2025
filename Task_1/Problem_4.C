/*
-Write a program that checks if a given word is a palindrome. A palindrome is a word that reads the same backward as forward.

Input: "level"
Output: "The word 'level' is a palindrome."

Input: "embedded"
Output: "The word 'embedded' is not a palindrome."
*/

#include <stdio.h>
#include <string.h>

int main(){
    char *s;
    if (s == NULL)
        return 1;
    else
        scanf("%s", s);
    char reverse[strlen(s+1)];
    for (int i = 0; i < strlen(s); i++){
        reverse[i] = s[strlen(s) - 1 - i]; 
    }
    reverse[strlen(s)] = '\0'; 
    if (strcmp(s, reverse) == 0)
        printf("The word %s is a palindrome.", s);
    else
        printf("The word %s is not a palindrome.", s);
    return 0;
}

