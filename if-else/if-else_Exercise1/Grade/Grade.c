#include<stdio.h>

int main()
{
    int marks;

    printf("Enter marks of Student1: ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100)
    {
        if(marks >= 93)
            printf("Grade = A\n");
        else
            printf("Grade = a\n");
    }
    else if(marks >= 85 && marks < 90)
    {
        if(marks >= 86)
            printf("Grade = B\n");
        else
            printf("Grade = b\n");
    }
    else if(marks >= 75 && marks < 85)
    {
        printf("Grade = C\n");
    }
    else
    {
        printf("Grade = D\n");
    }

    return 0;
}
