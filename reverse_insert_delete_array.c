#include <stdio.h>
void main()
{
    int n,i,j,pos,num,item,arr1[100],arr2[100];
    //input array size
    printf("Enter size of the array: ");
    scanf("%d",&n);
    //input elements
    printf("Enter elements of the array: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    //printing the entered array
    printf("The entered array is: ");
    for (i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    //printing the reversed array
    printf("\nThe reversed array is : ");
    for (j=0;j<n;j++){
    	arr2[j] = arr1[n-j-1];
        printf("%d ",arr2[j]);
    }
    //input the position & the element you want to insert
    printf ("\nEnter the position you want insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&item);
    for (i=n-1;i>=pos-1;i--){
        arr2[i+1]=arr2[i];
    }
    arr2[pos-1]=item;
    //printing the inserted array
    printf("The final array is: ");
    for (i=0;i<n+1;i++){
        printf("%d  ",arr2[i]);
    }
    //input the position you want to delete
    printf ("\nEnter the position you want delete the element: ");
    scanf("%d",&num);
    for (i=num-1;i<n;i++){
        arr2[i]=arr2[i+1];
    }
    //printing the deleted array
    printf("The final array is: ");
    for (i=0;i<n;i++){
        printf("%d  ",arr2[i]);
    }
}
