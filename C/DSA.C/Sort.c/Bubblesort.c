#include<stdio.h>
 
void printArray(int* Arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", Arr[i]);
    }
    printf("\n");
}
void bubbleSort(int *Arr, int n){
    
    for (int i = 0; i < n-1; i++){          
        for (int j = 0; j <n-1-i ; j++){
            if(Arr[j]>Arr[j+1]){
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp; 
            }
        }  
    } 
}
 
int main(){
    int Arr[] = {12, 54, 6, 7, 23, 9};
    // int Arr[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    // int Arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(Arr, n); // Printing the array before sorting
    bubbleSort(Arr, n); // Function to sort the array
    printArray(Arr, n); // Printing the array before sorting
    return 0;
}
