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
	int item,pos;
	struct Node *t=head;
	struct Node *q=NULL;
	printf("\nEnter data that you want to insert and position also ");
	scanf("%d %d",&item,&pos);
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	if(pos<0||pos>count(head))
	printf("Insertion is not possible!!");
	else if(pos==0)
	{
		if(head==NULL)
		{
			head=p;
			
		}
		else
		{
			p->next=head;
			head=p;
		}
		
	}
	else
	{
		for(int i=0;i<pos;i++)
		{
			q=t;
			t=t->next;
		}
		p->next=q->next;
		q->next=p;
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
