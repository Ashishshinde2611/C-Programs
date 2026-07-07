 
#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter the array elements:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<10;i++){
		if(i%2==0)
		printf("even :%d ",arr[i]);
	else 
		printf("odd :%d ",arr[i]);
	}
	return 0;
}