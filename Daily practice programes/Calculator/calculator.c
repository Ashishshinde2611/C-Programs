#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int a, b, result;

    do {
        printf("\nEnter your choice:\n");
        printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers (a and b): ");
            scanf("%d%d", &a, &b);
        }

        switch (choice) {
            case 1:
                result = a + b;
                printf("Addition = %d\n", result);
                break;
            case 2:
                result = a - b;
                printf("Subtraction = %d\n", result);
                break;
            case 3:
                result = a * b;
                printf("Multiplication = %d\n", result);
                break;
            case 4:
                     result = a / b;
                    printf("Division = %d\n", result);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid input.\n");
        }

    } while (choice != 5);

    return 0;
}
