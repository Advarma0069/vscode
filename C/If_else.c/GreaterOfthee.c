#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greater ",a);
    }
    if(b>a && b>c){
        printf("%d is greater ",b);
    }
    if(c>a && c>b){
        printf("%d is greater ",c);
    }

    return 0;

}