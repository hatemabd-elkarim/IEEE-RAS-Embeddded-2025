/*
Write a program to compare two dates entered by the user as strings. 
Make a structure named Date to store the elements day, month, and year to store the dates. 
If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".. (using Pointer to structure)
*/
#include <stdio.h>

struct date{
    int day,month,year;
};

bool areEqual(struct date *d1, struct date *d2);
int main(){
    struct date d1,d2;
    printf("Please enter the date in this formate dd mm yy: 18-11-2004\n");
    printf("First date: ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Seocnd date: ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);

    printf("Dates are %sequal\n", areEqual(&d1,&d2) ? "" : "not ");
}
bool areEqual(struct date *d1, struct date *d2){
    return(d1->day==d2->day && d1->month == d2->month && d1->year==d2->year);
}