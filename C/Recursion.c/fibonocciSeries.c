#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);

}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // int fibonocci;
    printf("%d",fibo(n));
    return 0;
}