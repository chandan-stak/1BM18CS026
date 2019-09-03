#include<stdio.h>
# define SIZE 10
void insert(int q[],int item,int *r)
{
if(*r==SIZE-1)
{
printf("queue is full\n");
return ;
}
*r=*r+1;
q[*r]=item;
}
int delete(int q[],int *f,int *r)
{
int item;
if(*f>*r)
{
printf("Queue is empty\n");
return -9999;
}
item=q[*f];
*f=*f+1;
return item;
}
void display(int q[],int f,int r)
{
int i;
if(f>r)
{
printf("queue is full\n");
return ;
}
for(i=f;i<=r;i++);
{
printf("%d\n",q[i]);
}
}
int main()
{
int q[SIZE], f=0,r=-1,item,y;
char c;
do{
printf("Enter  \n1.Insert\n2.Delete \n3.Display \n4.Exit\n ");
scanf("%c",&c);
fflush(stdin);
switch(c)
{
case '1':printf("Enter the element to be inserted into queue\n");
         scanf("%d",&item);
         insert(q,item,&r);
         break;

case '2':item=delete(q,&f,&r);
         printf("The deleted element is %d \n",item);
         break;

case '3':printf("The elements in the queue are: \n");
         display(q,f,r);
         break;

case '4':break;
}
printf("Enter '1' to continue or '0' to exit");
scanf("%d",&y);
}while(y==1);

return 0;
}