#include<stdio.h>

int main(void)
{
	int a,b,p,q, intResult1, intResult2;
	char ch1, ch2, charResult1, charResult2;
	
	printf("\n\n");
	
	a = 10;
	b = 7;
	ch1= 'A';
	ch2 = 'c';
	
	charResult1 = (ch1>ch2)? ch1 : ch2;
	intResult1  = (a>b)? a : b;
	printf("Answers:\ncharResult1= %c\nintResult1 = %d\n",charResult1,intResult1);
	 
	
    p = 10;
    q = 12;

    ch1 ='A';
    ch2 ='A';
    charResult2 = ((ch1 != ch2) || (q == 12)) ? ch1 : ch2;
    intResult2 = ((p>q)&&(ch1!=ch2))? p : q;
    printf("Answers;\ncharResult2 = %c\nintResult2 = %d\n", charResult2,intResult2);

return 0;
}
 
	
	