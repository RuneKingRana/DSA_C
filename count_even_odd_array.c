#include <stdio.h>
void main()
{
    int i,n,even=0,odd=0,a[100];
    //input size of the array
    printf("Enter size of the array: ");
    scanf("%d",&n);
    //input elements
    printf("Enter elements:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //count even & odd values
    for (i=0;i<n;i++){
        if (a[i]%2==0){
            even+=1;
        }
        else {
            odd+=1;
        }
    }
    //printing number of even & odd values
    printf("The number of even values are: %d \n",even);
    printf("The even values are: ");
    for (i=0;i<n;i++){
        if (a[i]%2==0){
                printf("%d ",a[i]);
        }
    }
    printf("\nThe number of odd values are: %d \n",odd);
    printf("The odd values are: ");
    for (i=0;i<n;i++){
        if (a[i]%2!=0){
                printf("%d ",a[i]);
        }
    }
}
