#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a[100][100],b[100][100],c[100][100],d[100][100],i,co,j,m,n,s=0;
 printf("Enter the no of rows and columns");
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
    {
      printf("enter the elements of 1st matrix");
      scanf("%d",&a[i][j]);
    }
  }
 for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
    {
      printf("enter the elements of 2nd matrix");
      scanf("%d",&b[i][j]);
    }
   }
 while(1)
  {
   printf("\nMENU");
   printf("\n1.Matrix addition\n2.Transpose\n3.Sum of Diagonal Elements\n4.Exit");
   printf("\nEnter your choice : ");
   scanf("%d",&co);
   switch(co)
    {
     case 1:
      {
       for(i=0;i<n;i++)
        {
          for(j=0;j<m;j++)
           { c[i][j]=a[i][j]+b[i][j];
             d[j][i]=a[i][j];
           }
        }
        printf("\nThe sum of matrix is");
        for(i=0;i<n;i++)
         {
          printf("\n");
           for(j=0;j<m;j++)
            {
             printf("%d\t",c[i][j]);
             }}
        break;
       }
    case 2:
     {
      printf("\n Transpose of :");
      for(i=0;i<n;i++)
       {
        printf("\n");
        for(j=0;j<m;j++)
         {
          printf("%d\t",a[i][j]);
         }
      }
      printf("\nis :");
      for(i=0;i<n;i++)
       {
        printf("\n");
        for(j=0;j<m;j++)
         {
          printf("%d\t",d[i][j]);
         }
        }
       break;
      }
    case 3:
     {printf("\nDiagonal elements of : ");
      for(i=0;i<n;i++)
       {
        printf("\n");
        for(j=0;j<m;j++)
         {
          printf("%d\t",a[i][j]);
         }
      }
      printf("\nis :");
      for(i=0;i<n;i++)
       {
        for(j=0;j<m;j++)
         {
          if(i==j)
           {
            printf("\ndiagonal elements are :");
            printf("%d ",a[i][j]);
            s=s+a[i][j];
           }
         }
       }
      printf("\nsum of diagonal elemets is =%d\n",s);
      break;
      }
    case 4:
     {
      exit(0);
      break;
     }
    default:
     {
       printf("Invalid Choice");
     }

  }}
}
















































