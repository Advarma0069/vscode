#include<stdio.h>

#define N 3 // change this value to adjust the size of the array
int matrixProduct(int arr[N][N]){

    int product=1;

    for(int i=0; i<N; i++){
        for(int j = 0; j < N; j++){
            product *= arr[i][j];
        }
    }
    return product;
}
int main(){

    int arr[N][N]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
        
    int result = matrixProduct(arr);

    printf("Product of the array:%d\n",result);

    return 0;
}