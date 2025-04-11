#include <stdio.h>
void main()
{
    int n,i,arr1[100],arr2[100],arr3[100];
    //input array size
    printf("Enter size of the array: ");
    scanf("%d",&n);
    //input elements
    printf("Enter elements of 1st array: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of 2nd array: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    //printing the two array
    printf("Two entered array is:\n");
    for (i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    //summation of the two array
    for (i=0;i<n;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    //printing the sum
    printf("The summation of the array is : ");
    for (i=0;i<n;i++){
        printf("%d ",arr3[i]);
    }
}
