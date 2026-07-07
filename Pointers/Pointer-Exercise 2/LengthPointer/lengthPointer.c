/*

Write a program in C to calculate the length of a array using a pointer.

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr = arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int length = 0;
    while(*(ptr + length) != 0) {
        length++;
    }
    length = length - 1;
    printf("The length of the array is: %d\n", length);

	return 0;

}

