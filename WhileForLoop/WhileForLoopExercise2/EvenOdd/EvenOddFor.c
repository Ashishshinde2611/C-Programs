
#include <stdio.h>

int main()
{
    int n;
    int sumEven = 0, sumOdd = 0;
	int diffEven = 0, diffOdd = 0;
    int multiEven = 1 , mutiOdd = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
	for(int i=1 ; i<=n ; i++)
{
        if (i % 2 == 0){
            sumEven += i;
		    if (diffEven == 0)     
                diffEven = i;
            else
                diffEven -= i;
			multiEven *= i;
		}
        else{
            sumOdd += i;
             if (diffOdd == 0)     
                diffOdd = i;
            else
                diffOdd -= i;
			mutiOdd *= i;
		}
			
    }

    printf("Sum of Even Numbers = %d\n", sumEven);
    printf("Sum of Odd Numbers  = %d\n", sumOdd);
	printf("Difference of Even Numbers = %d\n", diffEven);
    printf("Difference of Odd Numbers  = %d\n", diffOdd);
	printf("multiplication of Even Numbers = %d\n", multiEven);
    printf("multiplication of Odd Numbers  = %d\n", mutiOdd);

    return 0;
}
