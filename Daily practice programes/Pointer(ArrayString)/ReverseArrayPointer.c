#include<stdio.h>
void reverse (int*,int);

int main(){
	int arr[15];
	int *p = arr;
	int n;
	
	printf("Enter the Size of arr");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("Before:");
	for(int i =0;i<n;i++){
		printf(" %d",*(p+i));
	}
	reverse(p,n);
	printf("\nAfter:");
	for(int i=0;i<n;i++){
		printf(" %d",*(p+i));
	}
	return 0;
}

void reverse(int *p ,int n){
	int temp;
	for(int i =0 ;i<n/2;i++){
		temp = *(p+i);
		*(p+i) = *(p+n-1-i);
		*(p+n-1-i) = temp;
	}
}