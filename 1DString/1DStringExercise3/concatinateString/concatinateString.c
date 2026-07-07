//Accept two strings and concatinate the contents into 3rd string

#include<stdio.h>

int main(){
	char A[50], B[50],C[100];
	
	printf("Enter the String: ");
    scanf(" %[^\n]", A);
	
	printf("Enter the String: ");
    scanf(" %[^\n]", B);
	
	int i;
	
	for(i=0 ; A[i]!='\0';i++){
		C[i] =A[i];
	}
	C[i++] = ' ';
	for(int j=0 ; B[j]!='\0';j++,i++){
		C[i] =B[j];
	}
	C[i] ='\0';
	printf("concatinated` string:%s",C);
	
	
	return 0;
	
}