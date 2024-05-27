 #include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        // Check if the number is odd using if-else condition
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Print the sum if it is not zero, otherwise print "Null"
    if (sum != 0) {
        printf("Sum of odd number: %d\n", sum);
    } else {
        printf("Null\n");
    }

    return 0;
}
