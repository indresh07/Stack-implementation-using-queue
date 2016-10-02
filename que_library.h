/*************************************************************************************************************************************************************************************
Name	: Indresh Kumar Gupta
Roll 	: B15317
Purpose	: Program to perform queue operations 
***************************************************************************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//node for linked list
typedef struct node{												
	struct node* next;
	int data;
}node;

node* enque(node* head, int data);
node* deque(node* head);
int count(node* head);
node* que2stack(node* prev, node* head);
node* destroy(node* head);
void display(node* head);
