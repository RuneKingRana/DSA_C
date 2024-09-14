#include <stdio.h>
void main()
{
    int i,j,n,temp,a[100]={};
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements :");
	for (j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<=n-1;j++){
			if (a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("The sorted array  in accending order is:");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
