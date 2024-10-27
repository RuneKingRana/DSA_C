#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node * next;
    };
	struct node *head =0, *newnode, *temp;
//function to create the node
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
//function to print the node
void display(int count){
	struct node *pub=head;
	printf("The number of nodes: %d \n",count);
	printf("The values are: ");
	while(pub!=0){
	    printf("%d ",pub->data);
	    pub= pub-> next; 
	}
}
//function to insert node at the begining
void insertbnode(){
	newnode= (struct node *)malloc(sizeof (struct node)); 
    printf("Enter data: "); 
    scanf("%d",&newnode -> data); 
    newnode -> next =head; 
    head=newnode; 
}
/*function to insert node at the end
void insertenode(){
	newnode= (struct node *)malloc(sizeof (struct node)); 
    printf("Enter data: "); 
    scanf("%d",&newnode -> data); 
    newnode -> next = 0; 
    temp=head; 
	while(temp-> next !=0){ 
	   temp= temp-> next;    
	} 
	temp-> next=newnode;
}
*/
//function to insert node at a specific position
void insertmnode(int pos){
	int i=1;
	newnode= (struct node *)malloc(sizeof (struct node));
	printf("Enter data: "); 
    scanf("%d",&newnode -> data);
    temp=head; 
	while(i<pos-1){ 
		temp=temp->next;
		i++;
	}
	newnode ->next= temp-> next;
    temp-> next=newnode; 
}

void main(){
	int choice=1,m,count;
	while (choice==1){
	    createnode();
	    count++;
		printf("Do you want to continue(1) or quit(0): ");
		scanf("%d",&choice);
	}
	display(count);
	while (1){
		printf("\nDo you want to insert a node[yes(1)/no(0)]: ");
		scanf("%d",&m);
		if (m==0){
			break;
		}
		else if (m==1){
			int pos;
			printf("Enter position: ");
			scanf("%d", &pos);
			//command to insert node at the begining
			if (pos==1){
				insertbnode();
				count++;
				display(count);
			}
			//command to insert node at a specific position
			else if(pos>1 && pos<=count+1){
				insertmnode(pos);
				count++;
				display(count);
			}
			/*command to insert node at the end
			else if (pos==count+1){
				insertenode();
				count++;
				display(count);
			}*/
			else{
				printf("Invalid input!");
			}
		}
		else{
			printf("Invalid input!");
		}
	}
	
}

