#include<stdio.h>
int main()
{
	int arr[50];
	int n,i,j,flag = 0;
	printf("Enter the Size of Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	 for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	 for(i = 0; i < n; i++) {
        int num = arr[i];
        flag = 0;

        if(num <= 1) {
            flag = 1;  
        } else {
            for(j = 2; j <= num/2; j++) {
                if(num % j == 0) {
                    flag = 1; 
                    break;
                }
            }
        }

        if(flag == 0)
            printf("%d\n", num);
    }
return 0 ;
	
}

	
		