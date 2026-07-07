/* 

    Create a structure "Students" with below member variables:
	- Name of student,
    - Roll no. Of Student,
    - array of 5 Subject marks,
	- Total Percentage 
    
- Calculate the Percentage for "N" number of students,
- Display all details for all students,
- Display the details of topper.
(use array of structure)
*/

#include <stdio.h>

struct Students {
    char name[50];
    int roll;
    int marks[5];
    float percentage;
};

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Students s[n];

    for (i = 0; i < n; i++) {
        int total = 0;

        printf("\nEnter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks of 5 subjects:\n");
        for (j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        s[i].percentage = total / 5.0;
    }

    printf("\n--- All Students Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Marks: ");
        for (j = 0; j < 5; j++)
            printf("%d ", s[i].marks[j]);
        printf("\nPercentage: %f\n", s[i].percentage);
    }

    int topperIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].percentage > s[topperIndex].percentage)
            topperIndex = i;
    }

    printf("\n--- Topper Details ---\n");
    printf("Name: %s\n", s[topperIndex].name);
    printf("Roll No: %d\n", s[topperIndex].roll);
    printf("Percentage: %f\n", s[topperIndex].percentage);

    return 0;
}
