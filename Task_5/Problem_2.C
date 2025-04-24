/*
-Write a function that copies the string to another string without using the built-in string library function.

Input:
Str: Embedded systems

Output 
Original String: Embedded systems
Copied String: Embedded systems
*/

#include <stdio.h>

#define MAX_SIZE 100
int get_size (char str[]);
int main(){
    char original[MAX_SIZE];
    gets(original);
    int len = get_size(original);
    char copy[len+1]; // the plus one for null terminator

    for(int i = 0; i <= len; i++){
        copy[i] = original[i];
    }
    printf("Original String: %s\n", original);
    printf("Copied String: %s\n", copy);

}
int get_size (char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}