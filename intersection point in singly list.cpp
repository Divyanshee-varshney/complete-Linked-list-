#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
}*head1=NULL,*head2=NULL;
int insert1()
{
	struct Node *p=head1;
	int item;
	printf("\nEnter data ");
	scanf("%d",&item);
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=item;
	t->next=NULL;
	if(head1==NULL)
	{
		head1=t;
	 	
	}
	else
	{
		t->next=p;
		head1=t;
	}
	
}
int insert2()
{
	struct Node *p=head2;
	int item;
	printf("\nEnter data ");
	scanf("%d",&item);
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=item;
	t->next=NULL;
	if(head2==NULL)
	{
		head2=t;
	 	
	}
	else
	{
		t->next=p;
		head2=t;
	}
	
}


int display1()
{
	struct Node *p=head1;
	if(head1==NULL)
	printf("\nLinked list is empty");
	else
	{
		while(p)
	   {
		printf("%d ",p->data);
		p=p->next;
	   }	
	}

}
int display2()
{
	struct Node *p=head2;
	if(head2==NULL)
	printf("\nLinked list is empty");
	else
	{
		while(p)
	   {
		printf("%d ",p->data);
		p=p->next;
	   }	
	}

}
int count1(struct Node *head1)
{
	int len=0;
	struct Node *p=head1;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}
int count2(struct Node *head2)
{
	int len=0;
	struct Node *p=head2;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}
void intersect(struct Node *head1,struct Node *head2)
{
    int pos;
	struct Node *temp1=head1;
	printf("\nEnter position where you have to join");
	scanf("%d",&pos);
	pos--;
	while(pos--)
	{
		temp1=temp1->next;
	}
	struct Node *temp2=head2;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=temp1;
}
void intersection(struct Node *head1,struct Node *head2)
{
	struct Node *p1;
	struct Node *p2;
	int length1=count1(head1);
	int length2=count2(head2);
	int d;
	if(length1>length2)
	{
		d=length1-length2;
		p1=head1;
		p2=head2;
	}
	if(length2>length1)
	{
		d=length2-length1;
		p1=head2;
		p2=head1;
	}
	while(d)
	{
		p1=p1->next;
		if(p1==NULL)
		{
			printf("\n No intersection point is there in both linked list");
			return;
		}
		
     	d--;
	}
	while(p1&&p2)
	{
		if(p1==p2)
		{
			printf("\nintersection point is present and point is %d",p1->data);
			return;
		}
		p1=p1->next;
		p2=p2->next;
	}
		printf("\n No intersection point is there in both linked list");
	
}

int main()
{
	int choice;
	printf("1.insert in 1st linked list\n2.insert in 2nd linked list\n3.Display 1st linked list\n4.display 2nd linked list");
	printf("\n5.intersection point\n6.exit");
	while(1)
	{
		printf("\nEnter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert1();
				break;
			case 2:
			     insert2();
			     break;
			case 3:
			      display1();
				  break;
		    case 4:
		          display2();
				  break;
		    case 5:
		    	intersect(head1,head2);
			    intersection(head1,head2);
			    break;
			case 6:
			   exit(0);
			default:
			printf("\nWrong choice");       
			    
						  		      
				 	
		}
	}
}
