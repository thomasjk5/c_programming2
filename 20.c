#include<stdio.h>
struct student
{ char name[30];
  int rl;
  int m1;
  int m2;
  int m3;
  int m4;
  int s;
}s[100];
void main()
{
 int n,i,c,top,tm,tp,tc,tco,c1;
 printf("Enter the number of students : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {printf("Enter the rollNumber of student %d : ",i+1);
   scanf("%d",&s[i].rl);
   printf("\nEnter the name of roll number %d : ",s[i].rl);
   scanf("%s",s[i].name);
   printf("\nENTER MARKs OUT OF 50");
   printf("\nEnter mark of maths :");
   scanf("%d",&s[i].m1);
   printf("\nEnter mark of Physics :");
   scanf("%d",&s[i].m2);
   printf("\nEnter mark of Chemistry :");
   scanf("%d",&s[i].m3);
   printf("\nEnter mark of Computer :");
   scanf("%d",&s[i].m4);
   }
 do
 {
  printf("1.Students failed in more than 2 subjects\n2.Class topper and subject topper");
  printf("\nEnter your choice : ");
  scanf("%d",&c);
  if(c==1)
   {printf("Students failed in more than 2 subjects is : ");
     for(i=0;i<n;i++)
       {
        if (((s[i].m1<25)&&(s[i].m2<25))||((s[i].m3<25)&&(s[i].m4<25))||((s[i].m2<25)&&(s[i].m3<25))||((s[i].m1<25)&&(s[i].m4<25))||((s[i].m2<25)&&(s[i].m4<25))||((s[i].m1<25)&&(s[i].m3<25)))
	{printf("%s\n",s[i].name);
	}
  }}
  if(c==2)
  { for(i=0;i<n;i++) 
    {s[i].s=s[i].m1+s[i].m2+s[i].m3+s[i].m4;
     }
      top=s[0].s;
    for(i=0;i<n;i++)
     {if(s[i].s>top)
	{top=s[i].s;
 	  }}
    for(i=0;i<n;i++)
      {if(top==s[i].s)
	{printf("CLASS TOPPER IS : %s",s[i].name);
 	}}
    tm=s[0].m1;
    tp=s[0].m2;
    tc=s[0].m3;
    tco=s[0].m4;
    for(i=0;i<n;i++)
    {if(s[i].m1>tm)
       {tm=s[i].m1;}
     if(s[i].m2>tp)
       {tp=s[i].m2;}
     if(s[i].m3>tc)
       {tc=s[i].m3;}
     if(s[i].m4>tco)
       {tco=s[i].m4;}
     }
	for(i=0;i<n;i++)
	{if(tm==s[i].m1)
 	  {printf("\nTopper in Maths is : %s",s[i].name);
	   }
	 if(tp==s[i].m2)
 	  {printf("\nTopper in Physics is : %s",s[i].name);
	   }
 	if(tc==s[i].m3)
 	  {printf("\nTopper in Chemistry is : %s",s[i].name);
	   }
	if(tco==s[i].m4)
 	  {printf("\nTopper in Computer is : %s",s[i].name);
	   }
	}
	}
printf("\nDO YOU WANT TO CONTINUE 1(yes) or 0(no) : ");
scanf("%d",&c1);
printf("\n");
}while(c1==1);
}
     
