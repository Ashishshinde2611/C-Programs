 #include<stdio.h>
 int main(){
	 char str[10];
	 int i,Length;
	 printf("Enter the String:");
	 scanf("%s",str);
	 for(i=0;str[i]!='\0';i++){
		 Length = i + 1;
	 }
	 printf("%s\n",str);
	 printf("Length=%d",Length);
	 return 0;
 }
 