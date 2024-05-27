#include<stdio.h>

void printArray(int* Arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", Arr[i]);
    }
    printf("\n");
}
void insertionSort(int *Arr, int n){
    int key, j;
    // Loop for passes
    for (int i=1; i<=n-1; i++){
        key = Arr[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && Arr[j] > key){
            Arr[j+1] = Arr[j];
            j--;
        }
        Arr[j+1] = key;
    }
}

int main(){
    
    int Arr[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(Arr, n);
    insertionSort(Arr, n);
    printArray(Arr, n);
    return 0;
}
