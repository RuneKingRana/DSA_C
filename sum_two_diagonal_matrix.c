#include<stdio.h>
void main()
{
    int m,n,i,j,main =0,add = 0,arr[100][100];
    printf("Enter number of row: ");
    scanf("%d",&m);
    printf("Enter number of column: ");
    scanf("%d",&n);
    if (m==n){
        printf("Enter elements: ");
        for (i=0;i<m;i++){
            for (j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        printf("The entered array is:\n");
        for (i=0;i<m;i++){
            add += arr[i][m-1-i];
            for (j=0;j<n;j++){
                printf("%d ",arr[i][j]);
                if (i==j){
                    main += arr[i][j];
                }
            }
            printf("\n");
        }
        printf("Sum of main diagonal is: %d \n",main);
        printf("Sum of additional diagonal is: %d",add);

    }
    else {
        printf("Invalid input!");
    }
}
