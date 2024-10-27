#include <stdio.h>
#include <stdlib.h>
void main(){
    struct node {
        int data;
        struct node * next;
    };
	struct node *head, *newnode, *temp;
	head= 0;
	int choice=1;
	while (choice==1){
	    newnode= (struct node *)malloc(sizeof (struct node));
		printf("Enter data:");
		scanf("%d",&newnode -> data);
		newnode -> next =0;
		if (head== 0){
		    head=temp=newnode;
		}
		else{
		    temp -> next=newnode;
		    temp=newnode;
		}
		printf("Do you want to continue(1) or quit(0): ");
		scanf("%d",&choice);
	}
	temp=head;
	printf("The values are: ");
	while(temp!=0){
	    printf("%d ",temp->data);
	    temp= temp-> next; 
	}
}
