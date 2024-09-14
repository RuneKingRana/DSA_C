#include <stdio.h>
int binarySearch(int arr[], int left, int right, int key) {
    // checking if there are elements in the subarray
    if (right >= left) {
        // calculating mid point
        int mid = left + (right - left) / 2;
        // If the key is present at the middle itself
        if (arr[mid] == key)
            return mid;
        // If key is smaller than arr[mid], then it can only be present in left subarray
        if (arr[mid] > key)  {
            return binarySearch(arr, left, mid - 1, key);
        }
        // Else the key can only be present in right subarray
        return binarySearch(arr, mid + 1, right, key);
    }
    // We reach here when element is not present in array
    return -1;
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    // element to be searched
    int key;
    printf("Enter the valve you want to find: ");
    scanf("%d",&key);
    
    int index = binarySearch(arr, 0, size - 1, key);
    if (index == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Number %d is present at index %d .", key, index+1);
    }
    return 0;
}
