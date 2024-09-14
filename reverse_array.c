#include <stdio.h>
void main()
{
    int n,i,arr[100];
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
    //printing the reversed array
    printf("\nThe reversed array is : ");
    for (i=n;i>0;i--){
        printf("%d ",arr[i-1]);
    }
    /*printing the reversed array in another logic
    printf("\nThe reversed array is : ");
    for (i=0;i<n;i++){
        printf("%d ",arr[n-1-i]);
    }
    */
}
