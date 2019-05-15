#include<stdio.h>
#include<string.h>
void main()
{
	char str[70],ch;
	int co=0;
	printf("Enter the string:\n");
	fgets(str,70,stdin);
	printf("Enter the string to find:");
	scanf("%c",&ch);
	
	
	for(int i=0;str[i]!='\0';++i)
		{
			if(str[i]==ch)
				
					co++;
				
		}
	printf("The Substring occured %d times \n",co);
}
	

