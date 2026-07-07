#include <stdio.h>
#include <string.h>

typedef struct person {
	int age;
	char name[10];
}person;

int main(){
	person p1,p2;
	printf("Enter the p1 person detail : \n");
	printf("Enter the person p1 age :");
	scanf("%d",&p1.age);
	printf("Enter the person p1 name : ");
	scanf("%s", p1.name);
	
	printf("Enter the p2 person detail : \n");
	printf("Enter the person p2 age :");
	scanf("%d",&p2.age);
	printf("Enter the person p2 name : ");
	scanf("%s", p2.name);
	
	if(p1.age > p2.age)
	{
		printf("%s person is elder ..\n",p1.name);
	}
	else{
		printf("%s person is elder.. \n",p2.name);
	}
	return 0;
}

	
	