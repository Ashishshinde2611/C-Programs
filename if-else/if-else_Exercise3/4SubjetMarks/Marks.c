#include<stdio.h>

int main()
{
	int maths, bio, chem, phy;
	double per = 0;
	char grade;
	
	printf("Maths:");
	scanf("%d",&maths);
	printf("Biology:");
	scanf("%d",&bio);
	printf("Chemistry:");
	scanf("%d",&chem);
	printf("Physics:");
	scanf("%d",&phy);
	
	per = (maths + bio + chem + phy) / 4;
	
	if (per >= 90)
        grade = 'A';
    else if (per >= 75)
        grade = 'B';
    else if (per >= 60)
        grade = 'C';
    else if (per >= 45)
        grade = 'D';
    else
        grade = 'F';
	
	 printf("Percentage: %If\n", per);
    printf("Grade: %c\n", grade);

    return 0;    
}