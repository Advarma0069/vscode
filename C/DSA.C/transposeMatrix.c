#include <stdio.h>
// Function to transpose a square matrix
void transpose(int n, int mat[n][n]) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap element at [i][j] with element at [j][i]
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}
// Function to display a matrix
void displayMatrix(int n, int mat[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Original Matrix:\n");
    displayMatrix(n, mat);

    transpose(n, mat);

    printf("Transposed Matrix:\n");
    displayMatrix(n, mat);
    return 0;
}
