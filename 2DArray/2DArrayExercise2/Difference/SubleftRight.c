#include <stdio.h>

int main() {
    int n, m,sum=0,sum1=0,Sub=0;
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
		int max = arr[0][0], min = arr[0][0];
	printf("left Diagonal\n");
    for (int i = 0; i < n; i++) {
		printf(" %d\n",arr[i][i]);
        if(arr[i][i] > max)
            max = arr[i][i];
        if(arr[i][i] < min)
            min = arr[i][i];
    }
	sum = max + min;
	printf("Sum of highest and lowest Left Diagonal = %d ");
	int max1 = arr[0][m - 1], min1 = arr[0][m - 1];
    printf("Right Diagonal:\n");
    for (int i = 0, j = m - 1; i < n && j >= 0; i++, j--) {
        printf("%d\n", arr[i][j]);
        if (arr[i][j] > max1)
			max1 = arr[i][j];
        if (arr[i][j] < min1)
			min1 = arr[i][j];
    }
    sum1 = max1 + min1;
	printf("Sum of highest and lowest Right Diagonal = %d\n ");

	Sub = sum - sum1;
	 
	 printf("Difference of Leftdiagonal and Rightdiagonal %d - %d= %d",sum,sum1,Sub);
	return 0 ;
}