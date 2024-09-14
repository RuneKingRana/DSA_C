#include <stdio.h>

#define MAX_DEGREE 100

void inputPolynomial(int coefficients[], int degree) {
    for (int i = 0; i <= degree; i++) {
        printf("Enter the coefficient for x^%d: ", i);
        scanf("%d", &coefficients[i]);
    }
}

void printPolynomial(int coefficients[], int degree) {
    printf("The polynomial is: ");
    for (int i = degree; i >= 0; i--) {
        if (coefficients[i] != 0) {
            if (i == degree) {
                printf("%dx^%d", coefficients[i], i);
            } else {
                printf(" + %dx^%d", coefficients[i], i);
            }
        }
    }
    printf("\n");
}

int main() {
    int degree;
    int coefficients[MAX_DEGREE + 1] = {0};

    printf("Enter the highest degree of the polynomial: ");
    scanf("%d", &degree);

    inputPolynomial(coefficients, degree);
    printPolynomial(coefficients, degree);

    return 0;
}
