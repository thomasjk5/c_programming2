#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf ("Enter x and y : ");
scanf("%d%d",&a,&b);
swap(&a,&b);
return 0;
}
void swap(int *l,int *m)
{
int t;
t=*l;
*l=*m;
*m=t;
printf("After Swapping:\nx=%d\ty=%d",*l,*m);
printf("\n");

}

