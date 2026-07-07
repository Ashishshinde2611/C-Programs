/*

   Write a function which reads pointers of 2 different array as arguments, 
   return the pointer of array which elements are sum of  two array element. 
*/
#include <stdio.h>
int sumOfArrays(int *arr1, int *arr2, int *sumArr, int size);  

int main()
{
    int arr1[5], arr2[5], sumArr[5], i, *ptr1, *ptr2, *sumPtr;
    int Sum;
    printf("Enter 5 elements for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 elements for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }
    Sum = sumOfArrays(arr1, arr2, sumArr, 5);
    printf("Sum of the two arrays is: %d \n", Sum);
    
    return 0;
}
int sumOfArrays(int *arr1, int *arr2, int *sumArr, int size)  
{
    int i, totalSum = 0;
    for(i = 0; i < size; i++) {
        *(sumArr + i) = *(arr1 + i) + *(arr2 + i);
        totalSum += *(sumArr + i);
    }
    return totalSum;
}