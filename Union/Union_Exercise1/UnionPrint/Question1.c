/*
	Write a C program that declares a union with an int, float, and  array of size 10. Assign values to each and print them. 
	
*/

#include <stdio.h>

union Union
{
    int a;
    float c;
    int arr[10];
};

int main()
{
    union Union u1;

    
    u1.a = 12;
    printf("\na  = %d", u1.a);
    u1.c = 25.0f;
    printf("\nc = %f", u1.c);
    for (int i = 0; i < 10; ++i) {
        u1.arr[i] = i + 1;
    }
  
    printf("\nArray :");
    for (int i = 0; i < 10; ++i)
     printf("%d ", u1.arr[i]);
    


    return 0;
}