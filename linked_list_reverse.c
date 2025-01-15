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
void reverse(){
	struct node *curr=head,*prev=0,*next;
	while(curr!=0){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
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
	int choice=1,ch;
	while (choice==1){
	    createnode();
		printf("Do you want to continue(1) or quit(0): ");
		scanf("%d",&choice);
	}
	printf("The values are: ");
	display();
	printf("\nDo you want to reverse the list yes(1)/no(0): ");
	scanf("%d",&ch);
	if(ch==1){
		reverse();
		printf("The list in reverse order: ");
		display();
	}
	else if(ch==0){
		printf("The list is not reversed.");
		exit(0);
	}
	else{
		printf("Invalid input!");
	}
	
}

