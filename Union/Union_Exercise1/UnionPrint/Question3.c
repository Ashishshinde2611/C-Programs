/*
	Write a program that uses both a struct and a union to store a char, an int, and a float. Print the sizes and values before and after assigning them.
*/
#include <stdio.h>

struct StructData {
    char a;
    int b;
    float c;
};

union UnionData {
    char a;
    int b;
    float c;
};

int main()
{
    struct StructData s1;
    union UnionData u1;

    printf("Size of struct = %d bytes\n", sizeof(s1));
    printf("Size of union  = %d bytes\n\n", sizeof(u1));

    s1.a = 'X';
    s1.b = 25;
    s1.c = 30.5f;

    printf("STRUCT VALUES:\n");
    printf("a = %c\n", s1.a);
    printf("b = %d\n", s1.b);
    printf("c = %.2f\n\n", s1.c);

    printf("UNION VALUES:\n");

    u1.a = 'A';
    printf("a = %c\n", u1.a);

    u1.b = 100;
    printf("b = %d\n", u1.b);
    

    u1.c = 45.75f;
    printf("c = %.2f\n", u1.c);
    

    return 0;
}
