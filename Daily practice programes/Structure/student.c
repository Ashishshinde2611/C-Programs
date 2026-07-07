#include <stdio.h>
#include <string.h>

struct student{
	int rollno;
	char name[10];
};

int main (){
	struct student s ={45, "Rohit"};
	printf("Student Roll no : %d\n",s.rollno);
	printf("Student Name : %s\n",s.name);
	
	s.rollno = 17;
	strcpy(s.name ,"Dhiraj");
	printf("Student Roll no :%d\n",s.rollno);
	printf("Student Name :%s\n",s.name);
	
	printf("Enter the student roll no :");
	scanf("%d", &s.rollno);
	printf("Enter the student name : ");
	scanf("%s", s.name);
	printf("Student Roll no : %d\n",s.rollno);
	printf("Student Name : %s\n", s.name);
	
	return 0;
	}