#include <stdio.h>

int main()
{
    char months[12][20];   
    int i;

    printf("Enter names of 12 months:\n");

    for (i = 0; i < 12; i++) {
        printf("Month %d: ", i + 1);
        scanf(" %[^\n]", months[i]);  
    }

    printf("\nAll Month Names:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", months[i]);
    }

    return 0;
}
