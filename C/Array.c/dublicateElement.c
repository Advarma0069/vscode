#include<stdio.h>
int main(){
    int arr[7] = {1,2,7,4,5,6,7};
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6; j++){
            if(arr[i] == arr[j]){
                printf("%d is the dublicate element",arr[i]);
                break;
            }
        }
    }
    return 0;
}