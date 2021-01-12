#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
}*head;
int insert()
{
	struct Node *p=head;
	int item;
	printf("\nEnter data that you want to insert ");
	scanf("%d",&item);
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=item;
	t->next=NULL;
	t->prev=NULL;
	if(head==NULL)
	{
		head=t;
	}
	else
	{
		t->next=head;
		head->prev=t;;
		head=t;
	}
}
int display()
{
	struct Node *p=head;
	if(head==NULL)
	printf("\nNothing to display ");
	else
	{
		printf("\nYour linked list is ");
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
	printf("1.insert\n2.display\n3.exit");
	while(1)
	{
		printf("\nEnter choice ");
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
			    printf("\nWrong choice entered ");     
				 	
		}
	}
}

