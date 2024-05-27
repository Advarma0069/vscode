#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,21,30,42,21,6,7};
    int x = 42;
    int idx = -1;
    bool flag = false;
    for(int i=0; i<=6; i++){
        if(arr[i] == x){
            flag = true;
            idx = i;
            break; 
        }
    }
    if(flag == false){
        printf("%d is not present in the array: %d",x);
    }else{
        printf("%d is present in the array & idx: %d",x,idx);
    }
    return 0;
}