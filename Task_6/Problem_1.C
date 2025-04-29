/*
-Declare a Structure for a Dog / Cat and print the whole info.
Each one should have a name, age, kind, food , Owner’ name.
Or You can choose a normal Employee with name, salary, Id and job title.
*/


#include <stdio.h>

struct employee{
    const char *name;
    int salary;
    const char *id;
    const char *job_title;
};
int main(){
    struct employee emp1;
    emp1.name = "Hatem";
    emp1.salary = 9999999;
    emp1.id = "Hatem#123";
    emp1.job_title = "Engineer";
    printf("Name: %s, Salary: %d, ID: %s, Job Title: %s\n", emp1.name, emp1.salary,emp1.id,emp1.job_title);
}