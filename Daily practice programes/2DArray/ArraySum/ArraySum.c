#include<stdio.h>
int main (){
	int arr [3] [3];
	int sum = 0;
	printf("Enter the array elements");
	for(int i = 0 ; i < 3;i++){
		for (int j = 0; j < 3; j++){
			scanf("%d",&arr [i] [j]);
		}
	}
	for(int i = 0 ; i < 3;i++){
		for (int j = 0; j < 3; j++){
			printf("%d",arr [i] [j]);
			sum = sum + arr [i] [j];
		}
	}
	printf("Sum of elements:%d",sum);
	
	return 0;
}