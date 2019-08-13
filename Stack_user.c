#include<stdio.h>
void push(int ele,int s[5],int *t);
int pop(int s[5],int *t);
void display(int s[5],int t);
int main()
{
int stack[5],top=-1,e,ele,c;
do
{
printf(" Press 1: Push\n Press 2: Pop\n Press 3: Display\n Press 4:Exit\n");
scanf("%d",&c);
switch(c)
{ case 1: printf("Enter the element you want to push :\n");
          scanf("%d",&ele);
          push(ele,stack,&top);
          break;

  case 2: e=pop(stack,&top);
          if(e!=9999)
          {
            printf("The popped element is %d\n",e);
          }
          break;

  case 3: display(stack,top);
          break;

  case 4: break;
  
  default: printf("you have entered a wrong key\n");
           break;
};
}while(c!=4);
return 0;
}
void push(int ele,int s[5],int *t)
{
 if(*t==4)
  {
   printf("stack overflow\n");
   return;
  }
 *t=*t+1;
 s[*t]=ele;
}
void display(int s[5],int t)
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
int pop(int s[5],int *t)
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

  





