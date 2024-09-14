#include<stdio.h>
void main ()
{
	int i,j,n1,n2,temp,a1[200],a2[100];
	printf("Enter size of the first array:");
	scanf("%d",&n1);
	printf("Enter elements :");
	for (i=0;i<n1;i++){
		scanf("%d",&a1[i]);
	}
	printf("Enter size of  the second array:");
	scanf("%d",&n2);
	printf("Enter elements :");
	for (i=0;i<n2;i++){
		scanf("%d",&a2[i]);
	}
	for (i=0;i<n2;i++){
		a1[n1+i] = a2[i];
	}
	printf("The merged array is: ");
	for(i=0;i<n1+n2;i++){
		printf("%d ",a1[i]);
	}
	for (i=0;i<n1+n2-1;i++){
		for (j=0;j<n1+n2-1-i;j++){
			if (a1[j]>a1[j+1]){
				temp=a1[j];
				a1[j]=a1[j+1];
				a1[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted array is: ");
	for (i=0;i<n1+n2;i++){
		printf("%d ",a1[i]);
	}
}
