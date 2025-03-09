#include <stdio.h>
#include <stdlib.h>

int i,j,k,n,arr[100];

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    i = 0; 
    j = 0; 
    k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
    free(L);
    free(R);
}

// Iterative Merge Sort function
void mergeSort(int arr[], int n) {
    int curr_size;
    int left_start;
    
    for (curr_size = 1; curr_size < n; curr_size *= 2) {
        for (left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
            int mid = left_start + curr_size - 1;
            int right_end = (left_start + 2 * curr_size - 1 < n - 1) ? (left_start + 2 * curr_size - 1) : (n - 1);
            
            if (mid < right_end) {
                merge(arr, left_start, mid, right_end);
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for(i = 0; i < n; i++){
    	printf("%d ", arr[i]);
	}
}

void main() {
    printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
    
    mergeSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
}

