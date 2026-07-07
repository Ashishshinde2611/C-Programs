/*


   write a C program to read and print an employee's detail using structure.
   - read and print the employee's details like name, employee id, salary etc using structure.
   
*/
#include <stdio.h>

struct Employee {
    char name[50];
    int empId;
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
   	scanf("%d", &emp.empId);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.empId);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
