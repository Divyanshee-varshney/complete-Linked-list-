#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	
}*head;
int count()
{
	int length=0;
	struct Node *p=head;
	do{
		length++;
		p=p->next;
	}while(p!=head);
}

int insert()
{
	struct Node *p=head;
	struct Node *q=NULL;
	int item,pos;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter data that you want to insert and insert position also ");
	scanf("%d %d",&item,&pos);
	t->data=item;
	if(pos<0 && pos>count())
	printf("\nInsertion is not possible ");
	else if(pos==0)
	{
		if(head==NULL)
		{
			head=t;
			head->next=head;
		}
		else
		{
			while(p->next!=head)
			{
				p=p->next;
			}
			p->next=t;
		    t->next=head;
		    head=t;
		}
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
	}
	
}
int display()
{
	struct Node *p=head;
	printf("\nYour Linked list is ");
	do{
		printf("%d ",p->data);
		p=p->next;
	}while(p!=head);
}

int main()
{
	int choice;
	printf("1.Insert\n2.Display\n3.Exit");
	while(1)
	{
		printf("\nEnter your choice  ");
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
			    printf("\nOops! You have entered wrong choice ");
						 		 	
		}
	}
}

