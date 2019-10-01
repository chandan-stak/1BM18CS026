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
NODE push(int item,NODE head)
{
NODE p;
p=getnode();
p->data=item;
p->next=head;
head=p;
return head;
}
NODE pop(NODE head)
{
	NODE p=head;
	if(head==NULL)
	{
		printf("Stack Underflow.\n");
		return head;
	}
	printf("Popped Element = %d \n",p->data);
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
printf(" Press 1: Push\n Press 2: Pop\n Press 3: Display\n Press 4:Exit\n");
scanf("%d",&c);
switch(c)
{ case 1: printf("Enter the element you want to push :\n");
          scanf("%d",&ele);
          head=push(ele,head);
          break;

  case 2: head=pop(head);
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
 Press 1: Push
 Press 2: Pop
 Press 3: Display
 Press 4:Exit
1
Enter the element you want to push :
2
 Press 1: Push
 Press 2: Pop
 Press 3: Display
 Press 4:Exit
1
Enter the element you want to push :
3
 Press 1: Push
 Press 2: Pop
 Press 3: Display
 Press 4:Exit
1
Enter the element you want to push :
4
 Press 1: Push
 Press 2: Pop
 Press 3: Display
 Press 4:Exit
3
Contents of List are :
4
3
2
 Press 1: Push
 Press 2: Pop
 Press 3: Display
 Press 4:Exit
2
Popped Element = 4 
 Press 1: Push
 Press 2: Pop
 Press 3: Display
 Press 4:Exit
3
Contents of List are :
3
2
*/
