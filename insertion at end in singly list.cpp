#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	
}*head=NULL;
int count(struct Node *p)
{
	int length =0;
	while(p)
	{
		length++;
		p=p->next;
	}
	return length;
	
}
int insert()
{
	int item;
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	struct Node *t=head;
	
	printf("\nEnter data that you want to insert:  ");
	scanf("%d",&item);
	p->data=item;
	p->next=NULL;
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		for(int i=0;i<count(head)-1;i++)
		{
			t=t->next;
		}
		t->next=p;
		//t=p;
	}
}
int display()
{
	struct Node *p=head;
	if(head==NULL)
	printf("\nSorry!! there is nothing to display..");
	else
	{
		printf("\nYour linked list is.. ");
		while(p)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	}
}
int main()
{
	int choice;
	printf("\n1.insert\n2.Display\n3.Exit");
	while(1)
	{
		printf("\nEnter choice: ");
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
			    exit(0);
			default:
			    printf("\nOops!! You have entered wrong choice!!");
					    
					
		}
	}
}
