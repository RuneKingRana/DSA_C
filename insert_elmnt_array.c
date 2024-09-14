#include <stdio.h>
void main()
{
    int i,n,pos,item,a[100]={};
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf ("Enter the position you want insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&item);
    for (i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=item;
    printf("The final array is: ");
    for (i=0;i<n+1;i++){
        printf("%d  ",a[i]);
    }
}
