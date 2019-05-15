#include<stdio.h>
void main()
{
int a[100][100],b[100][100],c[100][100],n,m;
printf("enter the no of rows ");
scanf("%d",&n);
printf("enter the no of columns ");
scanf("%d",&m);


for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
printf("enter the elements");
scanf("%d",&a[i][j]);
}

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
printf("enter the elements");
scanf("%d",&b[i][j]);
}

for(int i=0;i<=n;i++)
for(int j=0;j<=m;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d "c[i][j]);
}
printf("\n");
}
}





