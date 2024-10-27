#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node * next;
    };
	struct node *head =0, *newnode, *temp;

void createnode(){
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
}

void display(){
	struct node *pub=head;
	//temp = head;
	while(pub!=0){
	    printf("%d ",pub->data);
	    pub= pub-> next; 
	}
}


void main(){
	int choice=1;
	while (choice==1){
	    createnode();
		printf("Do you want to continue(1) or quit(0): ");
		scanf("%d",&choice);
	}
	printf("The values are: ");
	display();
}

