#include <stdio.h>
#include <stdlib.h>
#define N 5

int rear = -1,front = -1, arr[N];
//function to add data
void enqueue(){
    int x;
    if ((rear+1)%N == front){
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
        	rear=(rear+1)%N;
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
        	printf("Now the queue is empyt!!\n");
		}
		else{
			front=(front+1)%N;
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
	int i=front;
    if (front==-1 && rear==-1){
        printf("Underflow!!\n");
    }
    else{
        printf("Elements present in the queue: ");
        while(i!=rear){
        	printf("%d ", arr[i]);
        	i=(i+1)%N;
		}
		printf("%d \n",arr[rear]);
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

