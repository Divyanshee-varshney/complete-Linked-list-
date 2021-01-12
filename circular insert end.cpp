#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	
}*head;

int insert()
{
	struct Node *p=head;
	int item;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter data that you want to insert ");
	scanf("%d",&item);
	t->data=item;
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

