#include <stdio.h>

int main()
{
    int base, index;
    int power = 1;   
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    for (int i = 1;i <= index; i++) {
        power *= base;
        
    }

    printf("%d %d = %d\n", base, index, power);

    return 0;
}