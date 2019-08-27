#include<stdio.h>
#include<stdlib.h>
int fib(int n);
int main()
{
int n;
printf("Enter n\n");
scanf("%d",&n);
printf("The fibonacci series term number %d is %d\n",n,fib(n));
return 0;
}
int fib(int n)
{
if(n==1)
{
return 0;
}
else if(n==2)
{
return 1;
}
else if(n<0)
{
printf("Invalid Input");
exit(0);
}
else
{
return (fib(n-1)+fib(n-2));
}
}