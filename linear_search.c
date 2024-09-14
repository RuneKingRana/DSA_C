#include <stdio.h>

int main() {
	
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
	int n = sizeof(arr);
	int i, key, found,index;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i+1;
            found = 1;
        }
    }
    if (found == 1){
    	printf("Number %d is present at index %d .", key, index);
	}
    else {
        printf("The element %d is not present in the array.", key);
    }

    return 0;
}

