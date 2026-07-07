 
#include<stdio.h>
int main()
{
	int arr[10];
	int Sum = 0;
	printf("Enter the array elements:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<10;i++){
		Sum = Sum + arr[i];
	}
	printf("Sum :%d",Sum);
	return 0;
}