#include<stdio.h>
struct poly
{int coe;
 int exp;
}p[10],p1[10],sum[50];
int main()
{ int n,i;
  printf("Enter the number of terms : ");
  scanf("%d",&n);
  printf("\nENTER THE FIRST POLYNOMIAL");
  for(i=0;i<n;i++)
   { 
     printf("\nEnter the power : ");
     scanf("%d",&p[i].exp);
     printf("\nEnter the coefficent : ");
     scanf("%d",&p[i].coe);

     
    }
   printf("%dx%d",p[0].coe,p[0].exp);
   for(i=1;i<n-1;i++)
    {printf("+%dx%d",p[i].coe,p[i].exp);
     }
   printf("+%d",p[n-1].coe);
  printf("\nENTER THE SECOND POLYNOMIAL");
  for(i=0;i<n;i++)
   { 
   
     printf("\nEnter the coefficent : ");
     scanf("%d",&p1[i].coe);
   }
   printf("%dx%d",p1[0].coe,p[0].exp);
   for(i=1;i<n-1;i++)
    {printf("+%dx%d",p1[i].coe,p[i].exp);
     }
   printf("+%d",p1[n-1].coe);
  

  for(i=0;i<n;i++)
  {
    sum[i].exp=p[i].exp;
    sum[i].coe=p[i].coe+p1[i].coe;
   }
  printf("\nSUM OF POLYNOMIALS IS ");
  printf("%dx%d",sum[0].coe,sum[0].exp);
   for(i=1;i<n-1;i++)
    {printf("+%dx%d",sum[i].coe,sum[i].exp);
     }
   printf("+%d",sum[n-1].coe);

	return 0;
}












  
