#include <stdio.h>
#include <stdlib.h>
int i, j, k;
void enter(char name[], int f, int g , int arr[50][50]){ 
	printf("Enter elements of the %s matrix: ", name);
    for (i = 0; i < f; i++) {
        for (j = 0; j < g; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void multiply(int x, int y, int z, int a1[50][50], int a2[50][50], int a3[50][50]){
	for (i = 0; i < x; i++) {
        for (j = 0; j < z; j++) {
            for (k = 0; k < y; k++) {
                a3[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
}

void display( int u, int v, int arr[50][50]){
	printf("Resultant matrix:\n");
    for (i = 0; i < u; i++) {
        for (j = 0; j < v; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, o, p;
    int a[50][50], b[50][50], c[50][50];
	printf("Enter rows of 1st matrix: ");
	scanf("%d", &m);
	printf("Enetr columns of the 1st matrix: ");
	scanf("%d", &n);
	printf("Enter rows of 2nd matrix: ");
	scanf("%d", &o);
	if (n != o){
		printf("First matrix column number and second matrix row number should be same.");
		exit(0);
	}
	printf("Enetr columns of the 2nd matrix: ");
	scanf("%d", &p);
	// Input elements of 2 matrix
    enter("1st",m,n,a);
    enter("2nd",o,p,b);
	// Multiplecant of two matrix
	multiply(m,n,p,a,b,c);
    //Print the result
	display(m,p,c);
    return 0;
}

