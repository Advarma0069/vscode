 #include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    // Initialize max and min with the first element of the array
    *max = arr[0];
    *min = arr[0];

    // Loop through the array starting from the second element
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }
        if(arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, -10, 23, 0, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMaxMin(arr, n, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
