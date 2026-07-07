/* 
   Write a Program to swap elements between two array using pointers.

*/

#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], i, *ptr1, *ptr2, temp;
    
    
    printf("Enter 5 elements for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    
    
    printf("Enter 5 elements for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }
    
    
    ptr1 = arr1;
    ptr2 = arr2;
    
    for(i = 0; i < 5; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
    
   
    printf("After swapping, first array is:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nAfter swapping, second array is:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
	
	return 0;
}  