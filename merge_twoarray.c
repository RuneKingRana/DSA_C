#include<stdio.h>
void main ()
{
	int i,n1,n2,a1[200],a2[100];
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
}
