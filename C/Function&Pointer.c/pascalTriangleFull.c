#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the value of the element in Pascal's triangle
unsigned long long pascal_element(int row, int col) {
    return factorial(row) / (factorial(col) * factorial(row - col));
}

// Function to print Pascal's triangle
void print_pascal_triangle(int rows) {
    for (int i = 0; i < rows; ++i) {
        // Print spaces for left alignment
        for (int k = 0; k < rows - i - 1; k++) {
            printf("   ");
        }
        for (int j = 0; j <= i; ++j) {
            printf("%6llu", pascal_element(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Pascal's Triangle:\n");
    print_pascal_triangle(rows);

    return 0;
}
