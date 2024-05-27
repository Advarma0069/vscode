#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 4;

    for(int i=0; i<=6; i++){
        if(arr[i]==x){
            printf("%d is present in the array and it's index is: %d",x,i);
            break;
        }
    }
    return 0;
}