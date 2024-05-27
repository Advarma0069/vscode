#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=1;
    // 1 2 4 8 16 32 64 128 256 512 ......... ,So on.
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    
    // int a=100;
    // // 100 97 94 91 ..........1 upto print
    // for(int i=1;a>0;i++){
    //     printf("%d ",a);
    //     a=a-3;
    // }
    return 0;

}