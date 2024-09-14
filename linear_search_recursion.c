#include <stdio.h>

int linearSearch(int* arr, int size, int key) {
  
    // Base Case: if there are no elements, return -1
    if (size == 0)
        return -1;

    // If the element at (size - 1) index is equal to key,return (size - 1)
    if (arr[size - 1] == key) {
        return size - 1;
    }

    // If element is not at (size - 1), call linear seach for same array arr but reducing the size by a single element
    return linearSearch(arr, size - 1, key);
}

int main() {
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the valve you want to find: ");
    scanf("%d",&key);

    // Calling linearSearch function
    int index = linearSearch(arr, size, key);

    if (index == -1) {
        printf("The element is not present in the array.");
    }
    else {
        printf("Number %d is present at index %d .", key, index+1);
    }

    return 0;
}
