#include <stdio.h>

int linearSearch(int* arr, int size, int key) {
  
    // Starting the loop and looking for the key in arr
    int i;
    for (i = 0; i < size; i++) {

        // If key is found, return key
        if (arr[i] == key) {
            return i;
        }
    }

    // If key is not found, return some value to indicate end
    return -1;
}

int main() {
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the valve you want to find: ");
    scanf("%d",&key);

    // Calling linearSearch
    int index = linearSearch(arr, size, key);

    // printing result based on value returned by the function linearSearch()
    if (index == -1) {
        printf("The element is not present in the array.");
    }
    else {
        printf("Number %d is present at index %d .", key, index+1);
    }

    return 0;
}
