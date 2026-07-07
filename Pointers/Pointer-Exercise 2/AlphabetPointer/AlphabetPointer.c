/* 

 Write a program in C to print all the alphabets using a pointer.
 
*/ 


#include <stdio.h>

int main()
{
    char alphabets[26];
    char *ptr = alphabets;

    
    for (int i = 0; i < 26; i++) {
        *(ptr + i) = 65 + i;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }

    return 0;
}
