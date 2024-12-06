#include <stdio.h>  
void main() {
	int i,j,n,temp,a[100];
    printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	for (i = 1; i < n; i++) {
        temp = a[i];
        j = i-1;
        while (j >= 0 && a[j] > temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
	  
    printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}  
}  
