#include<stdio.h>
int main(){
    // int arr[5];
    // for(int i=0;i<=4;i++){
    //     printf("Enter a number: ");
    //     scanf("%d",&arr[i]);
    // }
    // printf("%d",arr[1]);
    
    int arr[7]={1,2,3,4,5,6,7};
    int count=0;
    int x=4;
    for(int i=0;i<=6;i++){
        if(arr[i]>x);
        count++;
    }
    printf("%d",count);
    return 0;
}