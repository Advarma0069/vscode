#include<stdio.h>
void printArray(int* arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSort(int *arr, int n){
    int  min_index;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++){
        min_index = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
int main(){
    int arr[] = {3, 5, 2, 13, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}