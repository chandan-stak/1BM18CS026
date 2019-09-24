#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node * 	NODE;
NODE delete_front(NODE head);
void delete_rear(NODE head);
NODE delete_value(NODE head,int value);
void display(NODE head);
int main()
{
	NODE head=NULL;
	NODE p,q,r;
	p=(NODE)malloc(sizeof(struct node));
	head=p;
	q=(NODE)malloc(sizeof(struct node));
	r=(NODE)malloc(sizeof(struct node));
	p->data=30;
	q->data=40;
	r->data=50;
	p->next=q;
	q->next=r;
	r->next=NULL;
	int ch,item,ch_q;
	do
	{
		printf("Press 1: DELETION at FRONT\nPress 2 : DELETION at REAR\nPress 3: DELETION Of SPECIFIED ELEMENT\nPress 4: DISPLAY\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: head=delete_front(head);
				break;
			case 2: delete_rear(head);
				break;
			case 3: printf("Enter the Element to be DELETED:\n");
				scanf("%d",&item);
				head=delete_value(head,item);
				break;
			case 4: display(head);
				break;
			default: printf("Invalid choice.\n");
		};
		printf("Enter 1 to continue or 0 to exit(1/0)?\n");
		scanf("%d",&ch_q);
	}while(ch_q!=0);
	return 0;
}
NODE delete_front(NODE head)
{
	NODE p=head;
	if(head==NULL)
	{
		printf("List is empty.\n");
		return head;
	}
	printf("Deleted Element = %d \n",p->data);
	head=p->next;
	free(p);
	return head;
}
void delete_rear(NODE head)
{
	NODE p=head;
	NODE q;
	if(head==NULL)
	{
		printf("List is Empty.\n");
		return;
	}
	while(p->next!=NULL)
	{
	q=p;
	p=p->next;
	}
	printf("The Deleted Element is %d\n",p->data);
	q->next=NULL;
	free(p);
}
NODE delete_value(NODE head,int value)
{
	NODE prev;int f;
	NODE curr=head;
	if(curr==NULL)
	{
	printf("The list is Empty.");
	return head;
	}
	if(curr->data==value)
	{
		return delete_front(head);
	}
	while(curr->next!=NULL)
	{
		prev=curr;
		curr=curr->next;
		if(curr->data==value)
		{
			
			f=1;
			
			break;
		}
		
	}
	
	if(f!=1)
	{
		printf("The value is not Present in the List.\n");
		return head;	
	}
        else
           {		printf("Deleted Element = %d\n",curr->data);
			prev->next=curr->next;
			free(curr);
 		return head;
	}
	
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
