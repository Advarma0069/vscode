#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    if(a+b>a && b+c>a && c+a>b){
        printf("valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}