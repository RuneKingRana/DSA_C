#include <stdio.h>
void main(){
	int i,j,n,temp,a[100],min;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
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
	
	printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
