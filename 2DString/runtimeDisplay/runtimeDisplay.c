#include <stdio.h>
#include <stdio.h>

int main()
{
    char str[50][50];   
    int n, i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);

    
    for (i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf(" %[^\n]", str[i]);   
    }

    printf("\nYou entered:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
