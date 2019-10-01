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
NODE insert(int item,NODE head)
{
NODE p,q;
q=getnode();
q->data=item;
p=head;
if(p==NULL)
{
q->next=NULL;
head=q;
return head;
}
while(p->next!=NULL)
{
p=p->next;
}
p->next=q;
q->next=NULL;
return head;
}
NODE delete(NODE head)
{
	NODE p=head;
	if(head==NULL)
	{
		printf("Queue Underflow.\n");
		return head;
	}
	printf("Deleted Element = %d \n",p->data);
	head=p->next;
	free(p);
	return head;
}
void display(NODE head)
{
	NODE p;
	if(head==NULL)
	{
		printf("List is Empty.\n");
		return;
	}
	p=head;
	printf("Contents of List are :\n");
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main()
{
NODE head=NULL;
int e,ele,c;
do
{
printf(" Press 1: Insert\n Press 2: Delete\n Press 3: Display\n Press 4:Exit\n");
scanf("%d",&c);
switch(c)
{ case 1: printf("Enter the element you want to Insert :\n");
          scanf("%d",&ele);
          head=insert(ele,head);
          break;

  case 2: head=delete(head);
          break;

  case 3: display(head);
          break;

  case 4: break;
  
  default: printf("you have entered a wrong key\n");
           break;
};
}while(c!=4);
return 0;
}
/*
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
1
Enter the element you want to Insert :
2
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
3
Contents of List are :
2
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
1
Enter the element you want to Insert :
4
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
3
Contents of List are :
2
4
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
2
Deleted Element = 2 
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
3
Contents of List are :
4
 Press 1: Insert
 Press 2: Delete
 Press 3: Display
 Press 4:Exit
4
*/
