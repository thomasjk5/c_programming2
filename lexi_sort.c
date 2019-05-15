#include<stdio.h>
#include<string.h>
void main()
{char str[10][50],temp[50];
int i,j,n;
printf("Enter the number of elements :");
scanf("%d",&n);
printf("\nEnter the names :");
for(i=0;i<n;i++)
{scanf("%s",str[i]);
}
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }}
printf("\nSorted order is :");
for(i=0;i<n;i++)
{puts(str[i]);
} 
}
