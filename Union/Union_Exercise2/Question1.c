#include <stdio.h>

union Data {
    int i;
    float f;
    char s[20];
};

struct Info {
    union Data d;
    char type;
};

int main() {
    struct Info arr[5];
    int choice;

    for (int i = 0; i < 5; i++) {
        printf("Enter type for element %d (1=int, 2=float, 3=string): ", i + 1);
        scanf("%d", &choice);

        if (choice == 1) {
            arr[i].type = 'i';
            printf("Enter integer: ");
            scanf("%d", &arr[i].d.i);
        } 
        else if (choice == 2) {
            arr[i].type = 'f';
            printf("Enter float: ");
            scanf("%f", &arr[i].d.f);
        } 
        else if (choice == 3) {
            arr[i].type = 's';
            printf("Enter string: ");
            scanf("%s", arr[i].d.s);
        } 
        else {
            printf("Invalid choice, skipping...\n");
            arr[i].type = 'x';
        }
    }

    printf("\nStored values:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i].type == 'i') {
            printf("Element %d: %d\n", i + 1, arr[i].d.i);
        }
        else if (arr[i].type == 'f') {
            printf("Element %d: %.2f\n", i + 1, arr[i].d.f);
        }
        else if (arr[i].type == 's') {
            printf("Element %d: %s\n", i + 1, arr[i].d.s);
        }
        else {
            printf("Element %d: Invalid type\n", i + 1);
        }
    }

    return 0;
}
