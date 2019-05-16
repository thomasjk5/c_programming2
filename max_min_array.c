#include<stdio.h>
#define size 100
void main()
{int a[size],max,min,i,n;
printf("enter the limit : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
max = a[0];
min = a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
  max=a[i];
if(a[i]<min)       
  min=a[i];
}
printf("Maximum element = %d\n", max);
printf("Minimum element = %d", min);

}
