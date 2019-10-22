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

void display(NODE head)
{
NODE p;
if(head==NULL)
{
printf("List is empty\n");
return ;
}
p=head;
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}

void sort(NODE head)
{
NODE p=head,q=NULL;
int temp;
if(head=NULL)
{
return ;
}
while(p->next!=NULL)
{
 q=p->next;
 while(q!=NULL)
  {
   if(p->data > q->data)
    {
      temp=p->data;
      p->data=q->data;
      q->data=temp;
    }
  q=q->next;
  }
 p=p->next;
}
}

NODE reverse(NODE head)
{
NODE curr=head,prev=NULL,nextn=NULL;
if(head==NULL)
{
printf("List is empty\n");
return head;
}
if(head->next==NULL)
{
return head;
}
while(curr!=NULL)
{
nextn=curr->next;
curr->next=prev;
prev=curr;
curr=nextn;
}
head=prev;
return head;
}

NODE concatenate(NODE first,NODE second)
{
NODE p;
if(first==NULL)
{
return second;
}
if(second==NULL)
{
return first;
}
p=first;
while(p->next!=NULL)
{
p=p->next;
}
p->next=second;
return first;
}
int main()
{
NODE head1=NULL,head2=NULL;
int c,e,pos,p;
do{
printf("Enter \n 1.Insertion of List 1\n 2.Insertion of List 2\n 3.Sort\n 4.Reverse\n 5.Concatinate\n 6.Display\n");
scanf("%d",&c);
switch(c)
{
case 1: printf("Enter the element to be inserted into List 1:\n");
        scanf("%d",&e);
        head1=insertfront(e,head1);
        break;

case 2: printf("Enter the element to be inserted into List 2:\n");
        scanf("%d",&e);
        head2=insertfront(e,head2);
        break;


case 3: sort(head1);
        sort(head2);
        break;

case 4: head1=reverse(head1);
        head2=reverse(head2);
        break;

case 5: head1=concatenate(head1,head2);
        break; 

case 6: printf("Contents of the List 1:\n");
        display(head1);
        printf("Contents of the List 2:\n");
        display(head2);
        break;
}

printf("Enter 1 to continue 0 to exit\n");
        scanf("%d",&p);

}while(p==1);
return 0;
}
