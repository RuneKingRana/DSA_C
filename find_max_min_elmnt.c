#include <stdio.h>
void main()
{
	int i,m,max,min,a[100];
	//input size of the array
	printf("Enter the size of the array: ");
	scanf("%d",&m);
	//input elements
	printf("Enter the elements: ");
	for (i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	//printing the array
	printf("The entered array is: ");
	for (i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	//finding maximum and minimum element
	max = a[0];
	min = a[0];
	for (i=1;i<m;i++){
		if (a[i]<min){
			min = a[i];
		}
		else if (a[i]>max){
			max = a[i];
		}
	}
	//printing the maximum and minimum element
	printf("\nThe maximum element is: %d",max);
	printf("\nThe minimum element is: %d",min);
}
