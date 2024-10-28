#include <stdio.h>
#include <stdlib.h>
#define N 50

int top1 = -1,top2=-1, arr1[N],arr2[N],count=0;

void push1(int data){
	top1++;      // arr1[++top1] = data
	arr1[top1]=data;
}

int pop1(){
	return arr1[top1--];
}

void push2(int data){
	top2++;      // arr2[++top2] = data
	arr2[top2]=data;
}

int pop2(){
	return arr2[top2--];
}

void enqueue(){
	int x;
	if (top1 == N - 1){
        printf("Overflow!!\n");
    }
    else{
        printf("Enter the element : ");
	    scanf("%d", &x);
	    push1(x);
	    count++;
    }
}

void dequeue(){
	int i;
    if (top1==-1 && top2==-1){
        printf("Underflow!!\n");
    }
    else{
    	for(i=0;i<count;i++){
    		push2(pop1());
		}
        printf("Deleted element: %d\n", arr2[top2]);
        pop2();
        count--;
        for(i=0;i<count;i++){
    		push1(pop2());
		}
    }
}

void peek(){
	if (top1 == -1){
        printf("Underflow!!\n");
    }
    else{
        printf("The front element is: %d\n", arr1[0]);
    }
}

void display(){
	int i;
    if (top1 == -1){
        printf("Underflow!!\n");
    }
    else{
        printf("Elements present in the queue: ");
        for (i = 0; i <= top1; i++){
        	printf("%d ", arr1[i]);
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
