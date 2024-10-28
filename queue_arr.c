#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int rear = -1,front = -1, arr[SIZE];
//function to add data
void enqueue(){
    int x;
    if (rear == SIZE - 1){
        printf("Overflow!!\n");
    }
    else{
    	printf("Enter the element : ");
        scanf("%d", &x);
    	if(front==-1 && rear==-1){
            front=rear=0;
            arr[rear]=x;
		}
        else{
        	rear++;
        	arr[rear]=x;
		}
    }
}
//functuion to delete data
void dequeue(){
    if (front==-1 && rear==-1){
        printf("Underflow!!\n");
    }
    else{
        printf("Deleted element: %d\n", arr[front]);
        if(front==rear){
        	front=rear=-1;
        	printf("Now the quque is empyt!!\n");
		}
		else{
			front++;
		}
    }
}
//function to peek
void peek(){
	if (front==-1 && rear==-1){
        printf("Underflow!!\n");
    }
    else{
        printf("The front element is: %d\n", arr[front]);
    }
}
//function to diplay
void display(){
	int i;
    if (front==-1 && rear==-1){
        printf("Underflow!!\n");
    }
    else{
        printf("Elements present in the queue: ");
        for (i = front; i <= rear; i++){
        	printf("%d ", arr[i]);
		}
		printf("\n");
    }
}

int main(){
    int choice;
    while (1){
        printf("Enter operation enqueue(1) / dequeue(2) / Peek(3) / Display(4) / Exit(5):");
        scanf("%d", &choice);

        switch (choice){
	        case 1:
	            enqueue();
	            break;
	        case 2:
	            dequeue();
	            break;
	        case 3:
	            peek();
	            break;
	        case 4:
	            display();
	            break;
	        case 5:
	            exit(0);
	        default:
	            printf("Invalid choice!!\n");
	    }
    }
}

