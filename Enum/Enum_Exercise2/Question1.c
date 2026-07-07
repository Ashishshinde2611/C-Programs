#include <stdio.h>

enum Currency {
    USD = 1,
    EUR,
    GBP,
    INR
};

int main() {
    int choice;
    enum Currency curr;

    printf("Choose a currency:\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. GBP\n");
    printf("4. INR\n");
    scanf("%d", &choice);

    curr = choice;

    switch (curr) {
        case USD:
            printf("United States Dollar\n");
            break;
        case EUR:
            printf("Euro\n");
            break;
        case GBP:
            printf("British Pound\n");
            break;
        case INR:
            printf("Indian Rupee\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
