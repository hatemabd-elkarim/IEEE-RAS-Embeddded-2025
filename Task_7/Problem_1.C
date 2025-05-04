/*
-Create a struct named student_info which stores the following: 
Roll number(4-bit)
Age(8-bit) 
Marks(3-bit) 
Address, Name as strings 
then write a Function that prints all the info related to each of the 5 students. 
Explain how the processor will deal with each member of the struct and print the total size of the struct with these modifications.
*/

#include <stdio.h>
struct student_info{
   unsigned int rollNumber : 4;
   unsigned int age : 8;
   unsigned int marks : 3; 
   const char *address,*name;
};

void printStudent(struct student_info *ptr);
int main(){
    struct student_info s1;
    s1 = {7,20,5,"Zagazig", "Ali"};
    printStudent(&s1);
    printf("Total size: %d\n", sizeof(s1));
}
/*
    For 64-bit processor (8 bytes for a word): the total size is 24 bytes
    the first bitfield stores <<< 4 bytes >>> from the memory and the rest of the 4 bytes are left as padding besides another 
    <<< 4 bytes >>> also as padding beacuse the alignment is 8-byte, the other bitfields will occupy this padding and then 
    the two strings will store <<< 16 bytes >>> then the total is 4 + 4 + 16 = 24 bytes

    for 32-bit processor (4 bytes for a word): the total size is 12 bytes
    the first bitfield stores <<< 4 bytes >>> from the memory and the rest of the 4 bytes are left as padding
    the alignment is 4-byte so the padding still 4 bytes only, the other bitfields will occupy this padding and then 
    the two strings will store <<< 8 bytes >>> then the total is 4 + 8 = 12 bytes

*/

void printStudent(struct student_info *ptr){
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %u\n", ptr->rollNumber);
    printf("Age: %u\n", ptr->age);
    printf("Address: %s\n", ptr->address);
    printf("Marks: %u\n", ptr->marks);
}