/*  

     Accept 3 arrays for  3 subjects marks (dynamically), pass these 3 arrays of marks as an argument to the function " calculatePercentage()"
     calculate and print Percentage	of each students. (Use function pointer to call the function).


*/


#include <stdio.h>
#include <stdlib.h>

void calculatePercentage(int *sub1, int *sub2, int *sub3, int n);

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int *sub1 = (int *)malloc(n * sizeof(int));
    int *sub2 = (int *)malloc(n * sizeof(int));
    int *sub3 = (int *)malloc(n * sizeof(int));

    if (!sub1 || !sub2 || !sub3) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter marks of Subject 1:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &sub1[i]);

    printf("\nEnter marks of Subject 2:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &sub2[i]);

    printf("\nEnter marks of Subject 3:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &sub3[i]);

    void (*fptr)(int *, int *, int *, int);
    fptr = calculatePercentage;

    fptr(sub1, sub2, sub3, n);

    free(sub1);
    free(sub2);
    free(sub3);

    return 0;
}

void calculatePercentage(int *sub1, int *sub2, int *sub3, int n) {
    printf("\n--- Percentage of Each Student ---\n");

    for (int i = 0; i < n; i++) {
        int total = sub1[i] + sub2[i] + sub3[i];
        float percentage = (total / 3.0);
        printf("Student %d: %.2f %%\n", i + 1, percentage);
    }
}
