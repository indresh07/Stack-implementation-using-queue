/*************************************************************************************************************************************************************************************
Name	: Indresh Kumar Gupta
Roll 	: B15317
Purpose	: IC-250 Assignment-04 Part-3 : Stack implementation using queue
Date	: 6/09/16
***************************************************************************************************************************************************************************************/

#include"que_library.h"

int main(int argc, char** argv){
	
	//creates an empty queue
	node* head = NULL;
	int choice = 1;
	int data;

	system("clear");
	
	//loops till user doesn't want to exit
	while(choice != 0){

		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Destroy stack\n");
		printf("5. No. of elements in stack?\n");
		printf("0. Exit\n");
	
		printf("Enter your choice : ");
		scanf("%d", &choice);

		//executes according to option selected
		switch(choice){
			case 1 : printf("Enter value to be inserted : ");
				 scanf(" %d" , &data);
				 head = que2stack(NULL, head);
				 head = enque(head, data);
				 head = que2stack(NULL, head);
				 break;

			case 2 : if(head != NULL)
				 	printf("Deleting %d from stack", head->data);
				 else
					printf("Stack is already empty");

				 head = deque(head);
				 break;
	
			case 3 : printf("Stack : ");
				 display(head);
				 break;

			case 4 : head = destroy(head);
				 printf("Stack destroyed\n");
			  	 break;

			case 5 : printf("No. of elements in stack : %d", count(head));
				 break;

			default : printf("Invalid choice\n");
				  break;
		}
		
	}			

	system("clear");
	return 0;
}
