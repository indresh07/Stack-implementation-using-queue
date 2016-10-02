/*************************************************************************************************************************************************************************************
Name	: Indresh Kumar Gupta
Roll 	: B15317
Purpose	: Program to perform queue operations 
***************************************************************************************************************************************************************************************/

#include"que_library.h"


node* tail = NULL;

//pushes data in the stack
node* enque(node* head, int data){											

	node* new = (node*)malloc(sizeof(node));
	new->data = data;
	new->next = NULL;

	if(head == NULL){
		head = new;
		tail = head;

	}
	else{
		tail->next = new;
		tail = new;
	}

	return head;
}

//pops top element from stack
node* deque(node* head){		

	node* tmp;
	if(head != NULL){
		tmp = head;
		head = head->next;
		free(tmp);
	}

	return head;
}

//counts no. of elements in stack
int count(node* head){
	int n = 0;
	node* tmp = head;

	while(tmp != NULL){
		n++;
		tmp = tmp->next;
	}

	return n;
} 

//function to reverse queue
node* que2stack(node* prev, node* head){

	static int i = 0;
	
	if(i++ == 0)
		tail = head;

	node* tmp;
	tmp = prev;
	
	if(head != NULL){
		tmp = que2stack(head, head->next);
		head->next = prev;
	}
	else
		i = 0;
	
	return tmp;
}

//Destroys the whole stack at once
node* destroy(node* head){			

	while(head != NULL)
		head = deque(head);

	return head;
}

//Displays the elements in stack
void display(node* head){							
	
	node* tmp = head;

	while(tmp != NULL){
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
