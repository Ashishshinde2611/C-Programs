#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int a;

};
struct Demo_test
{
    struct Demo d1;
    int b;
   
};

struct Rollno{
    int rno;
};
struct FB7
{
    char namr[20];
    int age;
    long contact;
    long fees;

    struct Rollno{
    int rno;
};

};

int main()
{
    struct Demo_test dt_1;

    dt_1.d1.a =10;
    dt_1.b = 20;

    printf("%d%d",dt_1.d1.a,dt_1.b);

    
    return 0;
}


