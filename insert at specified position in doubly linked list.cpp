#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
}*head;
int count(struct Node *p)
{
	int length=0;
	while(p)
	{
		length++;
		p=p->next;
	}
	return length;
}
int insert()
{
	struct Node *p=head;
	int item,pos;
	printf("\nEnter data that you want to insert and position also ");
	scanf("%d %d",&item,&pos);
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=item;
	t->next=NULL;
	t->prev=NULL;
     if(pos==0)
	{
		if(head==NULL)
		{
			head=t;
			
		}
		else
		{
			t->next=head;
			head=t;
		}
	}
	else
	{
	
		for(int i=0;i<pos-1&&p;i++)
		{
		
			p=p->next;
			
		}
		t->next=p->next;

		t->prev=p;
		if(p->next!=NULL)
		{
			p->next->prev=t;
		}
		p->next=t;
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

