#include <stdio.h>

int main()
{
    char company[5][50], name[5][50], id[5][50], domain[5][50], salary[5][50], location[5][50];
    int i, j, flag;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Company Name: ");
        scanf(" %[^\n]", company[i]);

        printf("Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Employee ID: ");
        scanf(" %[^\n]", id[i]);

        printf("Employee Domain: ");
        scanf(" %[^\n]", domain[i]);

        printf("Employee Salary: ");
        scanf(" %[^\n]", salary[i]);

        printf("Employee Job Location: ");
        scanf(" %[^\n]", location[i]);
    }

    printf("\nEmployees working in Pune:\n");

    for (i = 0; i < 5; i++) {
        j = 0;
        flag = 1;
        while (location[i][j] != '\0' && "Pune"[j] != '\0') {
            if (location[i][j] != "Pune"[j] && location[i][j] != "pune"[j] && location[i][j] != "PUNE"[j]) {
                flag = 0;
                break;
            }
            j++;
        }

        if (flag == 1 && location[i][j] == '\0' && "Pune"[j] == '\0') {
            printf("Name: %s\tID: %s\n", name[i], id[i]);
        }
    }

    return 0;
}
