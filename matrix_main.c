#include <stdio.h>
#include "matrix.h"

double** readMatrix(int n, int m) {
    double** mx = malloc(n * sizeof(double*));
    for (int i = 0; i < n; ++i) {
        mx[i] = malloc(m * sizeof(double));
        for (int j = 0; j < m; ++j) {
            printf("Row %d, column %d: ", (i + 1), (j + 1));
            scanf("%lf", &mx[i][j]);
        }
    }

    return mx;
}

void deleteMatrix(double** mx, int n) {
    for (int i = 0; i < n; ++i) {
        free(mx[i]);
    }

    free(mx);
}

void printMatrix(double** mx, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0 ; j < m - 1; ++j) {
            printf("%1.2lf ", mx[i][j]);
        }
        printf("%1.2lf\n", mx[i][m - 1]);
    }
}

int main(int argc, char** argv) {
    if (argc != 5) {
        printf("Missing parameters!\n");
        return -1;
    }
    
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int n2 = atoi(argv[3]);
    int l = atoi(argv[4]);

    if (m != n2) {
        printf("Invalid matrix dimensions!\n");
        return -2;
    }

    double** x = readMatrix(n, m);
    double** y = readMatrix(m, l);
    double** z = matrixMultiplication(x, y, n, m, l);

    printMatrix(z, n, l);
    deleteMatrix(x, n);
    deleteMatrix(y, m);
    deleteMatrix(z, n);
}