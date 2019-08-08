#include<stdio.h>
#include<conio.h>
void main()
{
 struct student
 {
   char id[11];
   int age;
   int marks;
 }s;
 int flag=0;
 clrscr();
 printf("Enter the details of the student\n");
 scanf("%s %d %d",s.id,&s.age,&s.marks);
 if(s.age>20)
 {
  if(s.marks>=0 &&s.marks<=100)
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
  if(s.marks>65)
  {
   printf("\nStudent is eligible for admission");
  }
  else
  {
   printf("\nStudent is not eligible for admission");
  }
 }
 getch();
}
