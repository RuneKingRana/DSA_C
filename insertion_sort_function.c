#include <stdio.h>
int i,j,n,temp,a[100];
void insertion_sort(int a[],int n){
	for (i = 1; i < n; i++) {
        temp = a[i];
        j = i-1;
        while (j >= 0 && a[j] > temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void main() {
    printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	
	insertion_sort(a,n);
	  
    printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}  
}  
