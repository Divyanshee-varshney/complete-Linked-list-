#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head;
int insert();
int display();
int reverse();
int main()
{
	int choice;
	printf("\n1:insert\n2:Display\n3:reverse");
	while(1)
	{
		printf("\nEnter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
			    display();
		     	break;
			case 3:
			    reverse();
				break;
		    case 0:
			     exit(0);
		    default:
			     printf("\nYou have entered wrong choice");		 			
		}
	}
}
int count()
{
	int length=0;
	struct node *p=head;
	while(p)
	{
		length++;
		p=p->next;
	}
	return length;
}

int insert()
{
	struct node *p=head;
	struct node*t;
     int item;
     printf("\nEnter item");
     scanf("%d",&item);
     t=(struct node*)malloc(sizeof(struct node));
     t->data=item;
     t->next=NULL;
     if(head==NULL)
     {
     	head=t;
	 }
	 else
	 {
	 	for(int i=0;i<count()-1;i++)
	 	{
	 		p=p->next;
		 }
		 p->next=t;
	 }
}
int display()
{
	struct node*p=head;
	if(head==NULL)
	{
		printf("\nNothing to show");
	}
	else
	{
	while(p)
	{
		printf("%d  ",p->data);
		p=p->next;
	}	
	}
	
}
int reverse()
{
	struct node *p=head;
	struct node *r=NULL;
	struct node *q;
	while(p)
	{
		q=p->next;
		p->next=r;
		r=p;
		p=q;
		
	} 
	head=r;
}
	 
