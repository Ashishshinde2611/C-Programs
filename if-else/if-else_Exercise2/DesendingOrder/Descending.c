#include<stdio.h>

int main()
{
    int num, n1, n2, n3, temp;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    n1 = num / 100;
    n2 = (num / 10) % 10;
    n3 = num % 10;

    if(n1 < n2)
    {
        temp = n1; n1 = n2; n2 = temp;
    }
    if(n1 < n3)
    {
        temp = n1; n1 = n3; n3 = temp;
    }
    if(n2 < n3)
    {
        temp = n2; n2 = n3; n3 = temp;
    }

    printf("Descending order = %d, %d, %d\n", n1, n2, n3);

    return 0;
}
