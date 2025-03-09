#include <stdio.h>

int i,j,n,temp,arr[100],min;

void selection(int a[]){
	for (i=0;i<n-1;i++){
		min =i;
		for (j=i+1;j<n;j++){
			if (a[j]<a[min]){
				min =j;
			}
		}
		if (min != i){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

void display(int a[]){
	printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}

void main(){
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
	
	selection(arr);
	display(arr);
}
