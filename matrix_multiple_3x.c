#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, o, p, q, r, i, j, k;
    int a[50][50], b[50][50], c[50][50], d[50][50], e[50][50];
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
	printf("Enter rows of 3rd matrix: ");
	scanf("%d", &q);
	if (p != q){
		printf("Second matrix column number and Third matrix row number should be same.");
		exit(0);
	}
	printf("Enetr columns of the 3rd matrix: ");
	scanf("%d", &r);
	// Input elements of 3 matrix
    printf("Enter elements of the 1st matrix: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the 2nd matrix:");
    for (i = 0; i < o; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Enter elements of the 3rd matrix: ");
    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &c[i][j]);
        }
    }
	// Multiplecant of 1st & 2nd matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }
	// Multiplecant of result & 3rd matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < r; j++) {
            for (k = 0; k < p; k++) {
                e[i][j] += d[i][k] * c[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

    return 0;
}

