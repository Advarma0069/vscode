#include <stdio.h>
int main(){

    int arr[100];
    int i,n=10;
    for (i = 0; i < 10; i++){
        arr[i] = i + 1;
    }
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x = 50, pos = 5;
    n++;
    for (i = n - 1; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    } 
    return 0;
}