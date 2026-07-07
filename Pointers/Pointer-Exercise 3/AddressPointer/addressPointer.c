/*
   write Program to print addresses and size of all types of pointer variables.
 
*/
#include <stdio.h>
int main()
{
    int *intPtr;
    float *floatPtr;
    double *doublePtr;
    char *charPtr;

    printf("Address of int pointer: %p\n", (void*)&intPtr);
    printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));

    printf("Address of float pointer: %p\n", (void*)&floatPtr);
    printf("Size of float pointer: %zu bytes\n", sizeof(floatPtr));

    printf("Address of double pointer: %p\n", (void*)&doublePtr);
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));

    printf("Address of char pointer: %p\n", (void*)&charPtr);
    printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
  
   return 0;


} 