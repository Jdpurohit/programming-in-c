/*
Program with basic operations on circular linked list
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};

struct node* insert(struct node* head, int x)
{
	struct node* new=(struct node *)malloc(sizeof(struct node)); 
	if(!head)
	{
		new->data=x;
		new->next=new;
		return new;
	}
	struct node* h=head;
	while(h->next != head)
		h=h->next;

	h->next=new;
	new->data=x;
	new->next=head;
	
	return head;
}

int main()
{
	int x,value;
	printf("How many values to be inserted in SLL : ");
	scanf("%d",&x);
	struct node * head=NULL;	
	
	for(int i=0; i<x; i++)
	{
		//input is taken from user and stored in the linked list
		scanf("%d",&value);
		head=insert(head,value);		
	}

	struct node * p=head;
	//loop used to print the values of linked list
	do
	{
		printf("%d ",p->data);
		p=p->next;
	}while(p != head);
	printf("\n");	
	return 0;
}
