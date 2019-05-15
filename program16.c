#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[100],n,c,i,in,ip,id;

printf("Enter the limit :");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("\nenter the element :");
scanf("%d",&a[i]);
}
while(1)
{
printf("\n1.insertion\n2.deletion\n3.display\n4.Exit");
printf("\n Enter the choice :");
scanf("%d",&c);
if(c==1)
{printf("enter the element to be inserted :");
 scanf("%d",&in);
 printf("\nEnter the position for insertion :");
 scanf("%d",&ip);
 for(i=n-1;i>=ip-1;i--)
  {a[i+1]=a[i];
   }
  a[ip-1]=in;
  n=n+1;
printf("The array is :");
for(i=0;i<n;i++)
{printf("%d ",a[i]);
}

}
else if(c==2)
 {printf("Enter the position to be deleted :");
  scanf("%d",&id);
  for(i=id-1;i<n-1;i++)
   {a[i]=a[i+1];
   }
   n=n-1;
   printf("The array is :");
   for(i=0;i<n;i++)
   {printf("%d ",a[i]);
    }
 }
else if(c==3)
 {printf("The array is :");
  for(i=0;i<n;i++)
   {printf("%d ",a[i]);
  }
 }
else if(c==4)
 {exit(0);
  }
else 
 {printf("Invalid Choice");
 }

}

} 
