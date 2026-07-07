#include <stdio.h>

int main(void)
{
    char choice, ch = '\0';

    printf("Enter Y or y to start the infinite loop\n");
	printf("\nEnter Q or q to start the infinite loop\n");
	
	 scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        while (1)
        {
            printf("Inside loop...\n");
            scanf(" %c", &ch); 

            if (ch == 'Q' || ch == 'q')
                break;
        }

        printf("\nWE just exit the infinite loop\n");
    }
    else
    {
        printf("\nyou must enter 'Q' or 'q' to get out of the infinite loop\n");
    }

    return 0;
}
	
	
  
	
	
	
	
		
	