#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node * next;
    };
	struct node *head1 =0,*head2=0, *newnode, *temp;

void createnode1(){
    newnode= (struct node *)malloc(sizeof (struct node));
	printf("Enter data:");
	scanf("%d",&newnode -> data);
	newnode -> next =0;
	if (head1== 0){
	    head1=temp=newnode;
	}
	else{
	    temp -> next=newnode;
	    temp=newnode;
	}
}

void createnode2(){
    newnode= (struct node *)malloc(sizeof (struct node));
	printf("Enter data:");
	scanf("%d",&newnode -> data);
	newnode -> next =0;
	if (head2== 0){
	    head2=temp=newnode;
	}
	else{
	    temp -> next=newnode;
	    temp=newnode;
	}
}

void merge(){
	struct node *rkr=head1;
	while(rkr->next != 0){
	    rkr= rkr-> next; 
	}
	rkr->next=head2;
}

void display(struct node *x){
	struct node *pub=x;
	//temp = head;
	while(pub!=0){
	    printf("%d ",pub->data);
	    pub= pub-> next; 
	}
	printf("\n");
}


void main(){
	int choice=1;
	while (choice==1){
	    createnode1();
		printf("continue(1) or quit(0): ");
		scanf("%d",&choice);
	}
	printf("values of 1st list: ");
	display(head1);
	
	printf("Creating 2nd list.\n");
	choice=1;
	while (choice==1){
	    createnode2();
		printf("continue(1) or quit(0): ");
		scanf("%d",&choice);
	}
	printf("values of 2nd list: ");
	display(head2);
	
	choice=1;
	printf("Merge two lists yes(1)/no(0): ");
	scanf("%d",&choice);
	if(choice==1){
		merge();
		printf("The merged list is: ");
		display(head1);
	}
	else if(choice==0){
		exit(0);
	}
	else{
		printf("Invalid input!");
	}
}

