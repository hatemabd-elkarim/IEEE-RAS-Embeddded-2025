/*
-Write a program identify the size of a Dog/Cat and explain why this happened.
In a comment in your code(memory padding).
*/
#include <stdio.h>
struct cat{
    const char *name;
    const char *kind;
    const char *food;
    const char *owner;
};

struct abc1 {
    char a;
    int b;
    char c;
}version1;

struct abc2 {
    char a;
    char c;
    int b;
}version2;

struct abc3 {
    char a;
    char b;
    char c;
}version3;

int main(){
    struct cat my_cat = {"Bor3y", "Balady", "Anything and everything", "Hatem"};
    printf("%d\n", sizeof(my_cat)); // output: 32
    /*
        for a 64-bit processor a word is 8-byte and the cat struct contains 4 words so it is 32 (8 * 4) bits in size
    */

    printf("%d\n", sizeof(version1)); // output: 12
    /*
        alignement is decided upon the int which is 4 bytes
        so the first char will be on the first alignment (4 bytes with 3 empty rooms), the int in the second alignement (4 bytes),
        the third alignement in the third alignement (4 bytes with 3 empty rooms)
        Total: 4 * 3 = 12 bytes
    */

    printf("%d\n", sizeof(version2)); // output: 8
    /*
        alignement is decided upon the int which is 4 bytes
        so the char variables are on the first alignment (4 bytes with 2 empty rooms), then the int in the second alignment (4 bytes)
        Total: 4 + 2 = 8
    */

    printf("%d\n", sizeof(version3)); // output: 3

    /*
        alignement is decided upon the char which is 1 byte
        so the char variables are in 3 separate alignments each of 1 byte in size
        TOtal: 3 * 1 = 3
    */
}