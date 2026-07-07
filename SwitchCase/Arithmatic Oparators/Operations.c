#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first numbers: ");
	scanf("%f", &a);
	printf("Enter Two numbers: ");
	scanf("%f", &b);

    switch (choice)
    {
        case 1:
            result = a + b;
            printf("Result = %f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %f", result);
            break;

        case 4:
            if (b != 0)
                printf("Result = %f", a / b);
            else
                printf("Can not Divide");
            break;
    }

    return 0;
}
