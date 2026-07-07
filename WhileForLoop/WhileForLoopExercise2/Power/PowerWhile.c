//Accept a base and an index and calculate its power

#include <stdio.h>

int main()
{
    int base, index;
    int power = 1;   
    int i = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    while (i <= index) {
        power *= base;
        i++;
    }

    printf("%d %d = %d\n", base, index, power);

    return 0;
}
