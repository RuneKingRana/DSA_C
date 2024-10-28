#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int top = -1, arr[SIZE];
//function to push
void push(){
    int x;
    if (top == SIZE - 1){
        printf("Overflow!!\n");
    }
    else{
        printf("Enter the element : ");
        scanf("%d", &x);
        top = top + 1;
        arr[top] = x;
    }
}
//functuion to pop
void pop(){
    if (top == -1){
        printf("Underflow!!\n");
    }
    else{
        printf("Popped element: %d\n", arr[top]);
        top = top - 1;
    }
}
//function to peek
void peek(){
	if (top == -1){
        printf("Underflow!!\n");
    }
    else{
        printf("The top element is: %d\n", arr[top]);
    }
}
//function to diplay
void display(){
	int i;
    if (top == -1){
        printf("Underflow!!\n");
    }
    else{
        printf("Elements present in the stack: ");
        for (i = 0; i <= top; i++){
        	printf("%d ", arr[i]);
		}
		printf("\n");
    }
}

int main(){
    int choice;
    while (1){
        printf("Enter operation Push(1) / Pop(2) / Peek(3) / Display(4) / Exit(5):");
        scanf("%d", &choice);

        switch (choice){
	        case 1:
	            push();
	            break;
	        case 2:
	            pop();
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

