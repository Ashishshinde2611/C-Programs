//Accept a big number  (4 to 5 digits number) and count the number  of digits present in that number

#include<stdio.h>

int main()
{
	int no,digit ;
	int count=0;
	printf("Enter the numder:");
	scanf("%d",&no);
	for(;no>0;no = no / 10){
	count++;
	}
printf("count of number of digits: %d",count);

    return 0;
}