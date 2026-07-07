#include <stdio.h>
#include <string.h>

struct company 
{
	int company_code;
	char company_name[10];
	float turnover;
};

int main()
{
	struct company c1 = {1002 ,"Infosys" ,3.4 };
	
	struct company c2 ;
	c2.company_code = 4432;
	strcpy(c2.company_name , "ICS");
	c2.turnover = 2.6;
	
	printf("Company Code : %d\n" , c1.company_code);
	printf("Company Name : %s\n" , c1.company_name);
	printf("Company Turnover : %0.If$ billion\n\n" , c1.turnover);
	
	printf("Company Code : %d\n" , c2.company_code);
	printf("Company Name : %s\n" , c2.company_name);
	printf("Company Turnover : %0.If$ billion\n\n" , c2.turnover);
	
	return 0;
}

	