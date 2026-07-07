/*

Write a program in C to store n elements in an array and print the elements using a pointer.
*/

#include <stdio.h>



int main()
{

    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;

}