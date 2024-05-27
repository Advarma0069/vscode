#include <stdio.h>
#include<limits.h>
void findMinimumMaximum(int arr[], int N){
    int i;
    int minE = INT_MAX, maxE = INT_MIN;
    for (i = 0; i < N; i++) {
        if (arr[i] < minE) {
            minE = arr[i];
        }
        if (arr[i] > maxE) {
            maxE = arr[i];
        }
    }
    printf("The minimum element is %d\n", minE);
    printf("The maximum element is %d", maxE);
 
    return;
}
int main(){

    int arr[] = {1, 2, 4, -1,};

    int N = sizeof(arr) / sizeof(arr[0]);

    findMinimumMaximum(arr, N);
    
    return 0;
}