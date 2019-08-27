#include<stdio.h>
void towerhanoi(int n,char 'A',char 'B',char 'C');
int main()
{
int n;
char src='A',temp='B',dest='C';
printf("Enter the number of discs\n");
scanf("%d",&n);
towerhanoi(n,src,temp,dest);
return 0;
}
void towerhanoi(int n,char src,char temp,char dest)
{
if(n==1)
{
printf("Move %d from %c to %c\n",n,src,dest);
return;
}
towerhanoi(n-1,src,dest,temp);
printf("Move %d from %c to %c\n",n,src,dest);
towerhanoi(n-1,temp,src,dest);
}