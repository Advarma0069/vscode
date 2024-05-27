#include <stdio.h>
void addMatrices(int n, int mat1[n][n], int mat2[n][n], int result[n][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtractMatrices(int n, int mat1[n][n], int mat2[n][n], int result[n][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void displayMatrix(int n, int mat[n][n]){
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
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    // Addition
    addMatrices(n, mat1, mat2, result);
    printf("Result of addition:\n");
    displayMatrix(n, result);
    // Subtraction
    subtractMatrices(n, mat1, mat2, result);
    printf("Result of subtraction:\n");
    displayMatrix(n, result);
    return 0;
}
