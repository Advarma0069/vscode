#include <stdio.h>
void Fibonacci(int n, int *fibo) {

    int i;
    fibo[0] = 0;
    fibo[1] = 1;

    for (i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main() {

    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    int fibo[n]; // Declaring an array to store Fibonacci series
    Fibonacci(n, fibo); // Generating Fibonacci series
    
    for (i = 0; i < n; i++) {
        printf("%d ", *(fibo + i)); // Accessing array elements using pointers
    }
    
    return 0;
}
