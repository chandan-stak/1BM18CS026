#include<stdio.h>
#include<conio.h>
void main()
{
struct marks{
int m1,m2,m3,m4,m5,m6,m7;
}s1;
clrscr();
printf("enter marks\n");
scanf("%d%d%d%d%d%d%d",&s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5,&s1.m6,&s1.m7);
printf("marks obtained are %d %d %d %d %d %d %d \n",s1.m1,s1.m2,s1.m3,s1.m4,s1.m5,s1.m6,s1.m7);
getch();
}