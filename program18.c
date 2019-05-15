#include <stdio.h>
void main()
{
char str[1000], ch;
int i,f=0;
printf("Enter a character to find the frequency: ");
scanf("%c",&ch);
printf("Enter a string: ");
fgets(str,100,stdin);

for(i=0;str[i]!='\0';++i)
   {
    if(ch==str[i])
    ++f;
   }
printf("Frequency of %c = %d", ch, f);
  }

