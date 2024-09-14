#include <stdio.h>
void main()
{
    int i,j,m,n,trace=0,a[100][100];
    //input row & column
    printf("Enter number of row: ");
    scanf("%d",&m);
    printf("Enter number of column: ");
    scanf("%d",&n);
    //input elements
    printf("Enter elements: ");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //printing the real matrix
    printf("The entered array is:\n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //calculate the trace of the matrix
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (i==j){
                trace +=a[i][j];
            }
        }
    }
    //printing the trace of the matrix
    printf("The trace of the matrix is: %d",trace);
}
