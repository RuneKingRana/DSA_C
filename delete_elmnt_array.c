#include <stdio.h>
void main()
{
    int i,n,pos,a[100]={};
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf ("Enter the position you want delete the element: ");
    scanf("%d",&pos);
    for (i=pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    printf("The final array is: ");
    for (i=0;i<n-1;i++){
        printf("%d  ",a[i]);
    }
}

