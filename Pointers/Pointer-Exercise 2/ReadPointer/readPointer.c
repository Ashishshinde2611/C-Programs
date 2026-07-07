/*
   write a Program to read  array elements and print with addresses using pointers.

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

    printf("The elements in the array along with their addresses are:\n");
    for(i = 0; i < n; i++) {
        printf("Element: %d, Address: %p\n", *(ptr + i), (ptr + i));
    }
	return 0;
}