#include <stdio.h>

struct Employe {
    char company[50];
    int empId;
    float salary;
    int experience;
};

struct Person {
    char name[50];
    int age;
    char dob[20];
    char bloodGroup[10];
    struct Employe emp;
};

int main() {
    struct Person p;

    printf("Enter Name: ");
    scanf("%s", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Date of Birth (DD/MM/YYYY): ");
    scanf("%s", p.dob);

    printf("Enter Blood Group: ");
    scanf("%s", p.bloodGroup);

    printf("Enter Company Name: ");
    scanf("%s", p.emp.company);

    printf("Enter Employee ID: ");
    scanf("%d", &p.emp.empId);

    printf("Enter Salary: ");
    scanf("%f", &p.emp.salary);

    printf("Enter Years of Experience: ");
    scanf("%d", &p.emp.experience);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Date of Birth: %s\n", p.dob);
    printf("Blood Group: %s\n", p.bloodGroup);

    printf("\n--- Employee Details ---\n");
    printf("Company: %s\n", p.emp.company);
    printf("Employee ID: %d\n", p.emp.empId);
    printf("Salary: %.2f\n", p.emp.salary);
    printf("Experience: %d years\n", p.emp.experience);

    return 0;
}
