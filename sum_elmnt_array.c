#include <stdio.h>
void main()
{
    int n,i,sum=0,arr[100];
    //input array size
    printf("Enter size of the array: ");
    scanf("%d",&n);
    //input elements
    printf("Enter elements of the array: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //printing the entered array
    printf("The entered array is: ");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //calculate the sum
    for (i=0;i<n;i++){
        sum += arr[i];
    }
    //printing the sum
    printf("\nThe sum of the elements of the array is: %d",sum);
}
