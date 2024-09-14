//The norm of a matrix is the square root of the sum of each component of the matrix
#include <stdio.h>
#include <math.h>
void main()
{
    int i,j,m,n,sum=0,a[100][100];
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
    //calculate the norm of the matrix
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            sum+=pow(a[i][j],2);
        }
    }
    //printing the norm value
    printf("The norm of the matrix is: %f",sqrt(sum));
}
