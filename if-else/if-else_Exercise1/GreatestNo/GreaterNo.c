#include<stdio.h>

int main()
{
    int no1, no2, no3;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &no1, &no2, &no3);

    if(no1 >= no2 && no1 >= no3)
    {
        printf("Greater number = %d\n", no1);
    }
    else if(no2 >= no1 && no2 >= no3)
    {
        printf("Greater number = %d\n", no2);
    }
    else
    {
        printf("Greater number = %d\n", no3);
    }

    return 0;
}
