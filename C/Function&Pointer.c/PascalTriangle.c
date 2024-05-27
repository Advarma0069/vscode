#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the value of the element in Pascal's triangle
int pascal_element(int row, int col) {
    return factorial(row) / (factorial(col) * factorial(row - col));
}

// Function to print Pascal's triangle
void print_pascal_triangle(int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("% d", pascal_element(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    print_pascal_triangle(rows);

    return 0;
}
