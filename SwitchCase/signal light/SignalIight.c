#include <stdio.h>

int main()
{
    char signal;
    printf("Enter signal light: ");
    scanf(" %c", &signal);   

    switch (signal)
    {
        case 'R':
        case 'r':
            printf("STOP");
            break;

        case 'G':
        case 'g':
            printf("GO");
            break;

        case 'Y':
        case 'y':
            printf("SLOW DOWN");
            break;
    }

    return 0;
}
