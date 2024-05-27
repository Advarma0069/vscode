#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,1};
    arr[2]=10;
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}