#include<stdio.h>
#include<conio.h>
struct student
{
 char id[11];
 int age;
 int marks;
};
int validate(struct student s);
int qualify(struct student s);
int main()
{
 struct student st[10];
 int i,n;
 clrscr();
 printf("Enter the number of students\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter the details of student %d\n",i+1);
  scanf("%s %d %d",st[i].id,&st[i].age,&st[i].marks);
  if(qualify(st[i]))
  {
   printf("\nStudent %d is eligible for admission",i+1);
  }
  else
  {
   printf("\nStudent %d is not eligible for admission",i+1);
  }
 }
 getch();
 return 0;
}
int validate(struct student s)
{
 if(s.age>20 && s.marks>=0 && s.marks<=100)
  return 1;
 else
  return 0;
}
int qualify(struct student s)
{
 if(validate(s))
 {
  if(s.marks>65)
   return 1;
  else
   return 0;
 }
 else
 {
  printf("\nData is invalid");
  return 0;
 }
}
