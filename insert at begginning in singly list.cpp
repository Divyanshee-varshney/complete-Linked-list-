#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
}*head=NULL;
int insert()
{
	int item;
	struct Node *p=head;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter data that you want to insert  ");
	scanf("%d",&item);
	t->data=item;
	t->next=NULL;
	if(head==NULL)
	{
		head=t;
	}
	else
	{
		t->next=p;
		head=t;
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

