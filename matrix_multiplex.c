#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, o, p, i, j, k;
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

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

