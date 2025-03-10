#include <stdio.h>
int i,j,n,arr[100];
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    // Initialize pivot to be the first element
    int p = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        // Find the first element greater than
        // the pivot (from starting)
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }
        // Find the first element smaller than
        // the pivot (from last)
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // call partition function to find Partition Index
        int pi = partition(arr, low, high);
        // Recursively call quickSort() for left and right
        // half based on Partition Index
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

