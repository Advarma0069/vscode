#include <stdio.h>
void multiplyMatrices(int n, int mat1[][n], int mat2[][n], int result[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             result[i][j] = 0;
            for (int k = 0; k < n; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void displayMatrix(int n, int mat[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the size of the square matrices: ");
    scanf("%d", &n);
    int mat1[n][n], mat2[n][n], result[n][n];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    multiplyMatrices(n, mat1, mat2, result);
    printf("Result of multiplication:\n");
    displayMatrix(n, result);
    return 0;
}
