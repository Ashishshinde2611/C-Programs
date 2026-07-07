#include <stdio.h>

int main(void)
{
    int M1, M2, M3;
    int percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &M1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &M2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &M3);

    percentage = (M1 + M2 + M3) / 3;

    printf("Percentage = %d%%\n", percentage);

    return 0;
}
