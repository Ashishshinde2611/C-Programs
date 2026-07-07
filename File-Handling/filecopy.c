#include<stdio.h>

#define getchar() getc(stdin)
#define putchar(c) putc(c, FILE*)   // FILE*

void fileCopy(FILE*, FILE*);

int main(int argc, char*argv[])
{
    FILE * fp = NULL;
    FILE* destiantion_fp = NULL;
    destiantion_fp =  fopen("newFile.txt", "w");

    if(argc == 1)
    {
        puts("No arguments!");
        fileCopy(stdin, stdout);
    }
    else{
        while(argc > 0)
        {
            if((fp = fopen(*++argv, "r")) == NULL)
            {
                printf("Can not read the file %s\n", *argv);
                return 1;
            }
            else{
                fileCopy(fp, destiantion_fp);   
                fclose(fp);
                fclose(destiantion_fp);
            }
        }
    }

    return 0;
}

void fileCopy(FILE* ifp, FILE* ofp)
{
    int c ;
    while((c = getc(ifp)) != EOF)
    putc(c, ofp);
}