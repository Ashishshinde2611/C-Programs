#include<stdio.h>
int main()
{
	int arr[50];
	int n = 0,i;
	printf("Enter the Size of Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}