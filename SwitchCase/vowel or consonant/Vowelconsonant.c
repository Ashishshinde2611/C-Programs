#include<stdio.h>

int main()
{
	char ch ;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
		switch (ch)
    {
        case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
        case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
            printf("Vowel");
            break;
			default:
			printf("Consonant");
			break;
	}
	}
	return 0;
}