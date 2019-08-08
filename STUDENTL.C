#include<stdio.h>
#include<conio.h>
void main()
{
 struct student
 {
   char id[11];
   int age;
   int marks;
 }s[20];
 int i,n,flag=0;
 clrscr();
 printf("\nEnter the number of students\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter the details of student %d\n",i+1);
  scanf("%s %d %d",s[i].id,&s[i].age,&s[i].marks);
  if(s[i].age>20)
  {
   if(s[i].marks>=0 && s[i].marks<=100)
   {
    flag=1;
   }
   else
   {
    printf("\nData is invalid\n");
   }
  }
  else
  {
   printf("\nData is invalid\n");
  }
  if(flag==1)
  {
   if(s[i].marks>65)
   {
    printf("\nStudent %d is eligible for admission",i+1);
    flag=0;
   }
   else
   {
    printf("\nStudent %d is not eligible for admission",i+1);
   }
  }
 }
 getch();
}
