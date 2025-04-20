/*
-Write a function that returns the length of a string.
“Str = ‘Embedded Systems’”

Output:
Length = 16
*/

#include <stdio.h>

int count_characters(char *str);
int main(){
    char str[100];
    scanf("%[^\n]s", str); // to read spaces
    printf("Length = %d", count_characters(str));

}
int count_characters(char *str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++ ){
        count++;
    }
    return count;
}