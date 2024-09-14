#include <stdio.h>
void main()
{
    int m,n,i,j,res,spe=0,pos=0,arr[100][100];//  k,rkr=0,pkr=0,,a[200],b[100],c[100]
    printf("Enter number of row: ");
    scanf("%d",&m);
    printf("Enter number of column: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The entered array is: \n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    res=(m*n*2)/3;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (arr[i][j]==0){
                spe+=1;
            }
            else{
                pos+=1;

            }
        }
    }
    if (spe>=res){
        printf("The array is sparse matrix.");
    }
    else {
        printf("The array is not a sparse matrix.");
    }
    /*for (i=0;i<m*n;i++){
        for (j=0;j<n;j++){
            if (arr[i][j]>0){
                for (k=rkr;k < rkr+1;k++){
                    a[k] == i;
                    b[k] == j;
                    c[k] == arr[i][j];
                }
                rkr+=1;
            }
        }
    }
    for (i=0;i<pos;i++){
        a[pos+i]=b[i];
    }
    for (i=0;i<pos;i++){
        a[pos*2+i]=b[i];
    }
    for (i=0;i<3;i++){
        for (j=pkr;j<pos;j++){
            printf("\n%d ",a[j]);
        }
        pkr += pos;
        printf("\n");
    }*/

}
