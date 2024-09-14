#include <stdio.h>

int main() {
	int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, key, first, last, middle,found;
    // Input the element to search
    printf("Enter value to find: ");
    scanf("%d", &key);
    // Initialize the first and last index
    first = 0;
    last = n - 1;
    // Binary search algorithm
    while (first <= last) {
        middle = first + (last - first) / 2;  // Avoids potential overflow
        if (arr[middle] < key) {
            first = middle + 1;
        } 
		else if (arr[middle] == key) {
			found = 1;
            break;
        }
		else {
            last = middle - 1;
        }
    }
    //print the element present or not
    if (found == 1) {
        printf("Number %d is present at index %d .", key, middle+1);
    }
    else {
        printf("Element %d is not present in array",key);
    }
    return 0;
}
