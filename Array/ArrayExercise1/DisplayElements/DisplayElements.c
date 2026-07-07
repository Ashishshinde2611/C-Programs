 
#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter the array elements:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
	return 0;
}