#include<stdio.h>
int main()
{
int a[100],n,flag=0,s,*p,i;
p=a;
printf("Enter the no of elments :");
scanf("%d",&n);
printf("\nEnter the elments : ");
for(int i=0;i<n;i++)
{
scanf("%d",(p+i));
}
printf("enter the element to be searched : ");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(s==*(p+i))
{flag=1;
break;
}}
if(flag==1)
printf(" Element found at position : %d",i+1);
else
printf("Element not found");
return 0;
}

