#include <stdio.h>


int main()
{
    int choice;
    float a, b;
	int PI = 3.142;

    do
    {
        printf("\n1.Triangle  2.Rectangle  3.Circle  4.Cube  5.Cylinder  6.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: scanf("%f%f", &a, &b);
			printf("Area=%f", 0.5*a*b);
			break;
            case 2: scanf("%f%f", &a, &b);
			printf("Area=%f", a*b);
			break;
            case 3: scanf("%f", &a); 
			printf("Area=%.f",PI*a*a);
			break;
            case 4: scanf("%f", &a);   
			printf("Vol=%f", a*a*a);
			break;
            case 5: scanf("%f%f", &a, &b);
			printf("Vol=%f",PI*a*a*b);
			break;
            case 6: printf("Exit");
			break;
            default: printf("Invalid");
			break;
        }
    } while (choice != 6);

    return 0;
}
