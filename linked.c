#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node *NODE;
NODE getnode()
{
NODE p;
p=(NODE)malloc(sizeof(struct node));
if(p!=NULL)
{
return p;
}
else
{
printf("memory could not be allocated\n");
exit(0);
}
}
NODE insertfront(int item,NODE head)
{
NODE p;
p=getnode();
p->data=item;
p->next=head;
head=p;
return head;
}
NODE insertpos(NODE head, int item,int pos)
{
NODE curr,prev=NULL,newn;
int count=1;
newn=getnode();
newn->data=item;
newn->next=NULL;
if(head==NULL)
{
if(pos==1)
{
return newn;
}
else
{
printf("INVALID POSITION\n");
return head;
}
}
if(pos==1)
{
newn->next=head;
head=newn;
return head;
}
else
{
curr=head;
while(curr!=NULL && count!=pos)
{
prev=curr;
curr=curr->next;
count++;
}
if(count==pos)
{
prev->next=newn;
newn->next=curr;
return head;
}
else
{
printf("INVALID POSITION\n");
}
}
}
void insertend(int item,NODE head)
{
NODE p,q;
q=getnode();
q->data=item;
p=head;
while(p->next!=NULL)
{
p=p->next;
}
p->next=q;
q->next=NULL;
}
void display(NODE head)
{
NODE p;
if(head==NULL)
{
printf("List is empty\n");
exit(0);
}
p=head;
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
int main()
{
NODE head=NULL;
int c,e,pos,p;
do{
printf("Enter \n1.Insertion of Node at 1st position\n 2.Insertion of Node at any given position\n 3.Insertion of Node at End\n 4.Display\n");
scanf("%d",&c);
switch(c)
{
case 1: printf("Enter the element to be inserted\n");
        scanf("%d",&e);
        head=insertfront(e,head);
        break;

case 2: printf("Enter the element to be inserted\n");
        scanf("%d",&e);
        printf("Enter the position of insertion\n");
        scanf("%d",&pos);
        head=insertpos(head,e,pos);
        break;


case 3: printf("Enter the element to be inserted\n");
        scanf("%d",&e);
        insertend(e,head);
        break;

case 4: display(head);
        break;
}

printf("Enter 1 to continue 0 to exit\n");
        scanf("%d",&p);

}while(p==1);
return 0;
}
