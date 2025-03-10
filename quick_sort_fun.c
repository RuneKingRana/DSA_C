#include <stdio.h>
int i,j,n,arr[100];
void quickSort(int a[], int low, int high) {
    int stack[high - low + 1];
    int top = -1;
    stack[++top] = low;
    stack[++top] = high;
    
    while (top >= 0) {
        high = stack[top--];
        low = stack[top--];
        
        int pivot = a[high];
        int i = low - 1;
        for (j = low; j < high; j++) {
            if (a[j] < pivot) {
                i++;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;
        int p = i + 1;
        
        if (p - 1 > low) {
            stack[++top] = low;
            stack[++top] = p - 1;
        }
        
        if (p + 1 < high) {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }
}

void display(int a[]){
	printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}

void main() {
    printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
    // calling quickSort() to sort the given array
    quickSort(arr, 0, n - 1);
    display(arr);

}

