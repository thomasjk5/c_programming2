#include<stdio.h>
int sum(int n)
{if(n==0)
 return 0;
else
return((n%10)+sum(n/10));
}
int main()
{int x;
printf("Enter the number :");
scanf("%d",&x);
int y;
y=sum(x);
printf("\nSum of digits =%d",y);
return 0;
}
