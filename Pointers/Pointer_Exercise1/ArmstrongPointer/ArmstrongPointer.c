/*

Write a program in C to find whether the number is armstrong or not using a double pointer (Use function)

*/
#include<stdio.h>
int Armstrong(int **pq){
    int num = **pq;
	if (num < 0) return 0;
    if (num == 0) return 1;
	int temp = num;
	int remainder;
	int digit = 0;
	int sum = 0;
	
	
	while(temp!=0){
		temp /= 10;
		digit++;
	}
	
	temp = num;
	
	 while (temp != 0) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digit; i++) {
            power = power * remainder;
        }
        sum += power;
        temp /= 10;
    }

    return (sum == num);
}

int main()
{
	int a;
	printf("Enter the number:" );
	scanf("%d",&a);
	
	int *p = &a; 
	int **pq = &p;
	if(Armstrong(pq))
		printf("%d is an Armstrong number.\n", a);
	
	else
		printf("%d is not an Armstrong number.\n", a);
		
	
	return 0;
}