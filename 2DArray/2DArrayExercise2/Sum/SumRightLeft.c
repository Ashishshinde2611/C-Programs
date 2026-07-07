#include <stdio.h>

int main() {
    int n, m, sum=0,sum1=0,TotalSum =0;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int arr[n][m];
	
	printf(" matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
     
        }
    }
	printf("left Diagonal\n");
    for (int i = 0; i < n; i++) {
		sum += arr[i][i];
   printf(" %d\n",arr[i][i]); 		
    }
	printf("Right Diagonal\n");
    for (int i = 0,j= n-1; i < n; i++,j--) {
            sum1+= arr[i][j];
			printf(" %d\n",arr[i][j]);
    }
	 TotalSum = sum + sum1;
	 printf("Sum of Leftdiagonal and Rightdiagonal= %d",TotalSum);
	return 0 ;
}