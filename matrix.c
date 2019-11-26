#include "matrix.h"

double** matrixMultiplication(double** x, double** y, int n, int m, int l) {
    double** z = (double**) malloc(n * sizeof(double*));

    for (int i = 0; i < n; ++i) {
        z[i] = calloc(l, sizeof(double)); //Fontos, hogy calloc
        for (int j = 0; j < l; ++j) {
            for (int k = 0; k < m; ++k) {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }

    return z;
}