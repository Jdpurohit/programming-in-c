/*
Program with basic operation on doubly linked list
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	struct node* prev; 
};

struct node* insert(struct node* head, int x)
{
	struct node* new=(struct node *)malloc(sizeof(struct node)); 
	if(!head)
	{
		new->data=x;
		new->next=NULL;
		new->prev=NULL;
		return new;
	}
	struct node* h=head;
	while(h->next)
	h=h->next;

	h->next=new;
	new->data=x;
	new->next=NULL;
	new->prev=h;
	
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
		scanf("%d",&value);
		head=insert(head,value);		
	}

	struct node * p=head;
	//printing elements 
	while(p->next != NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);

	//printing elements in reverse order
	while(p)
	{
		printf("%d ",p->data);
		p=p->prev;
	}
	printf("\n");	
	return 0;
}
