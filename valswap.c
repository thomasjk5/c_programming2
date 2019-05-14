#include<stdio.h>
void swap(int ,int );
int main()
{
int c,d;
printf("Enter the Values of x & y :");
scanf("%d%d",&c,&d);
swap(c,d);
return 0;

}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("\nAfter Swapping:\nx=%d\ty=%d",a,b);
}
