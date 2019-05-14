#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	FILE *f1,*f2;
	f1=fopen("file1.txt","r");   /*I entered hello how are you inside the file*/
	f2=fopen("file2.txt","a");
	if(f1==NULL||f2==NULL)
	printf("File not found");
	else
	{
	while(ch!=EOF)
	{
		ch=getc(f1);
		putc(ch,f2);
	}
	printf("File copied Succesfully");
	fclose(f1);
	fclose(f2);
	}
return 0;
 }
