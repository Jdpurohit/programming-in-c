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

struct node* rev(struct node * p)
{
	struct node * prev = NULL;
	struct node * temp;
	
	while(p)
	{
		temp=p->next;
		p->next=prev;
		prev=p;
		p=temp;
	}
	return prev;
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
	head=rev(head);
	struct node * p=head;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");	
	return 0;
}
