#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
    int id;
    char name[50];
    int age;
    float gpa;
}stud;

void addStudent(stud*, int *);
void displayStudents(stud*, int);
void searchStudent(stud*, int);
void updateStudent(stud*, int);
void saveToFile(stud*, int);
void loadFromFile(stud*, int*);

int main(int argc, char ** argv)
{
    stud  s[10];
    stud c[10];

    memset(&s,0, sizeof(stud) );

    int cnt = -1;
    int choice;
    do{
        printf("\n\n**********Students Record Management System**********");
        printf("\n1. Add student");
        printf("\n2. View all students");
        printf("\n3. search student by ID");
        printf("\n4. Update student record");
        printf("\n5. Save to file");
        printf("\n6. Load from File");
        printf("\n7.Exit");
        printf("\n*****************************************************");
        printf("\n Enter the choice : ");
        
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent(s, &cnt);
                printf("\nNew Student added !");
            break;

            case 2:
            printf("\n######### Student Details #########\n");
            displayStudents(s, cnt);
            break;

            case 3:
            printf("\n######### Searching student ....");
            searchStudent(s, cnt);

            break;

            case 4:
            printf("\n######### Updating Student Details #########");
            updateStudent(s, cnt);

            break;

            case 5:
            printf("\n######### Loading records to File #########");
            saveToFile(s, cnt);
            printf("\n_______ All records are stored in File! _______ ");
            break;

            case 6:
            printf("\n######### records Loading from File #########");
            loadFromFile(c, &cnt);
            printf("\n_______  records loaded from File! _______ ");
            break;

            case 7:
            printf("\nThank you !");
            exit(0);
            break;

            default:
            printf("\nInvalid choice ! Enter the correct choice");
            break;
        }
    }while(choice != 7);
    return 0;
}

void addStudent(stud* s , int * cnt)
{
    if(*cnt >= 9)
    {
        printf("\nFull capacity !!!");
    }
    else
    {
      ++(*cnt);
      printf("\nEnter id of student : ");
      scanf("%d", &s[*cnt].id);
      printf("\nEnter the name of student: ");
      fflush(stdin);
      fgets(s[*cnt].name, sizeof(s[*cnt].name), stdin);
      s[*cnt].name[strcspn(s[*cnt].name, "\n")] = '\0'; 
      printf("\nEnter the age of student : ");
      scanf("%d", &s[*cnt].age);
      printf("\nEnter the CGPA : ");
      scanf("%f", &s[*cnt].gpa);
    }
    
}

void displayStudents(stud* s, int cnt)
{
    printf("\n inside displayStudents() , cnt = %d", cnt);
    for(int i = 0 ; i <= cnt; i++ )
    {
        printf("\n**********************************");
        printf("\n s[%d].id = %d", i, s[i].id);
        printf("\n s[%d].name = %s", i , s[i].name);
        printf("\n s[%d].age = %d", i , s[i].age);
        printf("\n s[%d].gpa = %f", i, s[i].gpa);
        printf("\n**********************************");
    }
}

void searchStudent(stud* s, int cnt)
{
    int searchId;
    int flag = 0;
    int i = 0;
    printf("\nEnter the ID of student to search : ");
    scanf("%d", &searchId);
    for( i = 0 ; i <= cnt ; i++)
    {
        if((s[i].id) == searchId)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n**********************************");
        printf("\n s[%d].id = %d", i, s[i].id);
        printf("\n s[%d].name = %s", i , s[i].name);
        printf("\n s[%d].age = %d", i , s[i].age);
        printf("\n s[%d].gpa = %f", i, s[i].gpa);
        printf("\n**********************************");
    }
    else
    {
        printf("\nStudent not found !");
    }
}

void updateStudent(stud* s, int cnt)
{
    int searchId;
    int flag = 0;
    int i = 0;
    printf("\nEnter the ID of student to update : ");
    scanf("%d", &searchId);
    for( i = 0 ; i <= cnt ; i++)
    {
        if((s[i].id) == searchId)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\nEnter the values to update : ");
        printf("\nEnter id of student : ");
      scanf("%d", &s[i].id);
      getchar();
      printf("\nEnter the name of student: ");
      fgets(s[i].name, sizeof(s[i].name), stdin);
      s[i].name[strcspn(s[i].name, "\n")] = '\0';

      printf("\nEnter the age of student : ");
      scanf("%d", &s[i].age);
      printf("\nEnter the CGPA : ");
      scanf("%f", &s[i].gpa);
    }
    else{
        printf("\nStudent not found to update!");
    }

}

void saveToFile(stud* s, int cnt)
{  
    FILE * fp = fopen("student_record.txt", "w");
    fputs("ID\tNAME\t\tAGE\tGPA", fp);

    for(int i = 0; i <= cnt ; i++)
    {
        fprintf(fp,"\n %d\t%s\t\t%d\t%f", s[i].id, s[i].name, s[i].age, s[i].gpa);
    }

    fclose(fp);
}

void loadFromFile(stud *c , int* cnt)
{
    FILE *fp = fopen("student_record.txt", "r");
    if (fp == NULL) {
        printf("\nError opening file!");
        return;
    }

 
    char temp[100];
    fgets(temp, sizeof(temp), fp);

    int i = 0;
    while (fscanf(fp, "%d\t%[^\t]\t%d\t%f", &c[i].id, c[i].name, &c[i].age, &c[i].gpa) == 4) {
        i++;
        if (i >= 10) break;  
    }

    *cnt = i - 1; 

    fclose(fp);


    printf("\n ##### Watch loaded data ##### ");
    displayStudents(c, *cnt);
    
}