#include<stdio.h>

int i,j,n,temp,arr[100];

void bubble(int a[])
{
	for (i=0;i<n-1;i++){
		for (j=0;j<n-1-i;j++){
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void display(int a[])
{
	printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}

void main()
{
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
	
	bubble(arr);
	display(arr);
}
