#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void push(char item,char s[100],int *t);
char pop(char s[100],int *t);
int precedence(char symbol);
void InfixtoPostfix(char infix_exp[100],char postfix_exp[100]);
int main()
{
char infix[100],postfix[100];
printf("Enter Infix expression: \n");
gets(infix);
InfixtoPostfix(infix,postfix);
printf("Postfix expression: \n");
puts(postfix);
getch();
return 0;
}
void push(char item,char s[100],int *t)
{
if(*t==99)
{
  printf("Stack overflow\n");
  return ;
}
else
{
  *t=*t+1;
  s[*t]=item;
}
}
char pop(char s[100],int *t)
{
char item;
if(*t==-1)
{
  printf("Stack underflow\n");
  return 'x';
}
else
{
  item=s[*t];
  *t=*t-1;
  return item;
}
}
int precedence(char symbol)
{
if(symbol=='^')
  {
   return 3;
  }
else if(symbol=='*' || symbol=='/')
  {
   return 2;
  }
else if(symbol=='+' || symbol=='-')
  {
   return 1;
  }
else
  {
   return 0;
  }
}
void InfixtoPostfix(char infix_exp[100],char postfix_exp[100])
{
char item,x,stack[100];
int top=-1;
int i=0,j=0;
push('(',stack,&top);
strcat(infix_exp,")");
item=infix_exp[i];
while(item!='\0')
{ 
if(item=='(')
  {
   push(item,stack,&top);
  }
  else if(isalpha(item) || isdigit(item))
  {
   postfix_exp[j]=item;
   j++;
  }
  else if(item==')')
  {
   x=pop(stack,&top);
   while(x!='(')
    {
     postfix_exp[j]=x;
     j++;
     x=pop(stack,&top);
    }
  }  
  else
  {
   while(precedence(stack[top])>=precedence(item))
    {
     postfix_exp[j]=item;
     j++;
     pop(stack,&top);
    }
    push(item,stack,&top);
  }
i++;
item=infix_exp[i];
}
postfix_exp[j]='\0';
}   

