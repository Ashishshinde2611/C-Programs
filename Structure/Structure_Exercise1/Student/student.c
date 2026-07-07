/* 
    write a C program to create, declare and initialize structure.
    - define a structure "student", which includes the details of students,
    - declare an object of the structure and initialize the structure members.
*/

#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[50];
    float cgpa;
    char branch[30];
    int age;
};

int main()
{
    struct student s1 = { 101, "Rajesh Kumar", 8.5,"Computer Science", 20 };

    printf("========== STUDENT DETAILS ==========\n\n");
    printf("Roll Number: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %f\n", s1.cgpa);
    printf("Branch: %s\n", s1.branch);
    printf("Age: %d\n", s1.age);
    printf("======================================\n");

    return 0;
}