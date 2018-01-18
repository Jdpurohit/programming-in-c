/*
Program to reverse single linked list using iteration method
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};

struct node* insert(struct node* h, int x)
{
	struct node* new=(struct node *)malloc(sizeof(struct node)); 
	if(!h)
	{
		new->data=x;
		new->next=NULL;
		return new;
	}
	struct node* q=h;
	while(h->next)
	h=h->next;

	h->next=new;
	new->data=x;
	new->next=NULL;
	
	return q;
}

struct node* rev(struct node* head)
{
	if(head == NULL)
	return NULL;
	if(head->next == NULL)
	return head;

	struct node *temp1=head->next;
	head->next=NULL;

	struct node *temp2=rev(temp1);
	temp1->next=head;
	return temp2;
}

int main()
{
	int x,value;
	printf("How many values to be inserted in SLL : ");
	scanf("%d",&x);
	struct node * head=NULL;	
	for(int i=0; i<x; i++)
	{
		//input of linked list elements
		scanf("%d",&value);
		head=insert(head,value);		
	}
	//reversing of linked list elements
	head=rev(head);

	//output of linked list elements
	struct node * p=head;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");	
	return 0;
}
