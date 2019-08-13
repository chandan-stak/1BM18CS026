#include<stdio.h>
void push(int ele,int s[100],int *t);
int pop(int s[100],int *t);
void display(int s[100],int t);
int main()
{
int stack[100],top=-1,e;
push(1,stack,&top);
push(2,stack,&top);
push(3,stack,&top);
display(stack,top);
e=pop(stack,&top);
if(e!=9999)
{
printf("The popped element is %d\n",e);
}
display(stack,top);
return 0;
}
void push(int ele,int s[100],int *t)
{
 if(*t==99)
  {
   printf("stack overflow\n");
   return;
  }
 *t=*t+1;
 s[*t]=ele;
}
void display(int s[100],int t)
{
 int i;
 if(t==-1)
  {
    printf("stack is empty\n");
    return;
  }
  for(i=t;i>=0;i--)
  {
   printf("%d\n",s[i]);
  }
}
int pop(int s[100],int *t)
{
  int x;
  if(*t==-1)
  {
   printf("Stack Underflow\n");
   return 9999;
  }
  x=s[*t];
  *t=*t-1;
  return x;
}

  





