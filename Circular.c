
#include<stdio.h>
#define size 4
void insert(int item,int *r,int q[],int *f);
int delete(int q[],int *f,int *r);
void display(int q[],int f,int r);
int main()
{       int ch,q[size],item;
	int f=-1,r=-1;                     
	int c;
	do
	{
	printf("Press 1: INSERTION\nPress 2: DELETION\nPress 3: DISPLAY\n");
	printf("Enter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("Enter the Element :\n");
				scanf("%d",&item);
				insert(item,&r,q,&f);
				break;
		case 2 : item=delete(q,&f,&r);
				if(item!=-9999)
				printf("Deleted Element is %d\n",item);
				break;
		case 3: display(q,f,r);
				break;
		default : printf("Invalid Choice.");
				break;
	};
	printf("Do you want to Continue (1/0) ? \n");
	scanf("%d",&c);
	}while(c!=0);
	return 0;
}
void insert(int item,int *r,int q[],int *f)
{
	if((*f==*r+1)||(*f==0 && *r==size-1))
	{
	printf("Queue Overflow.\n");
		return;
	}
	if(*f==-1)
	*f=0;
	*r=(*r+1)%size;
	q[*r]=item;
}
int delete(int q[],int *f,int *r)
{
	int item;
	if(*f==-1)
	{
	printf("Queue Underflow.\n");
	return -9999;
	}
	item=q[*f];
	if(*f==*r)
	{
		*f=-1;
		*r=-1;
	}
	else
		*f=(*f+1)%size;
	return item;
	
}
void display(int q[],int f,int r)
{
	int i;
	if(f==-1)
	{
	printf("Queue is Empty.\n");
	return;
	}
	printf("Contents of Queue are:\n");
	for(i=f;i!=r;i=(i+1)%size)
	printf("%d\n",q[i]);
	printf("%d\n",q[i]);

}
