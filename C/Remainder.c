#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    int q=a/b;
    int r=a-b*q; //remainder * quatient + remainder = Divident
    printf("The remainder when %d is divided by %d is :%d",a,b,r);
    return 0;
}