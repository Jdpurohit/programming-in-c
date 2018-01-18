/*
Implementation of Floyd’s Cycle-Finding Algorithm for dection of cycle in the linked list
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
 
int detection(struct Node* head)
{
	struct Node* slow=head;
	struct Node* fast=head;
	
	while(slow && fast && fast->next)
	{

		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			printf("Yes! Loop exists\n");
			return 0;
		}		
	}
	printf("No! Loop don't exists\n");
	return 0;
}
void insert(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
int main()
{
	struct Node* head=NULL;
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);

	//creating loop in the linked list	
	head->next->next->next->next=head;
	detection(head);	

	return 0;
}
