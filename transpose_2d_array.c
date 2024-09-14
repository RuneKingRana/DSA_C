//The transpose of a matrix is interchanging its rows into columns or columns into rows
#include <stdio.h>
void main()
{
    int i,j,m,n,temp,a[100][100],at[100][100];
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
    //printing real array
    printf("The entered array is:\n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //transpose the array
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            at[j][i]=a[i][j];
        }
        printf("\n");
    }
    //printing the transpose array
    printf("The transpose array is:\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",at[i][j]);
        }
        printf("\n");
    }
}
