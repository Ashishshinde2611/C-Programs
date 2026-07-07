#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	int vowel =0 , consonent = 0;
	printf("Enter the String: ");
	scanf("%s",str);
	for(int i =0 ; str[i]!='\0';i++){
		if(str[i] =='a' || str[i] =='A'||
		str[i]=='e'||str[i]=='E'||
		str[i]=='i'||str[i]=='I'||
		str[i]=='o'||str[i]=='O'||
		str[i]=='u'||str[i]=='U'){
		vowel++;
		}
		else if (str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122){
			consonent++;
	}
	}
	printf("vowels :%d",vowel);
	printf("\nconsonent :%d",consonent);
	
	return 0;
}

