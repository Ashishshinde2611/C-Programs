#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[50];
    FILE *  fp = NULL;
 
    fp = fopen("Input.txt", "w");

    printf("\n Enter the user input you want to store in file : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';   


 
   fputs(str, fp);
    fputs("Hello World", fp);
    
    
   for(int i = 0 ; str[i]!='\0'; i++)
   {
       fputc(str[i], fp);
   }


    fprintf(fp, "%s", str ); 
    printf("\nData written successfully to Input.txt\n");
 

    fclose(fp);

    return 0;
}