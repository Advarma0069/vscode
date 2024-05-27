#include<stdio.h>
int main(){
    int n;
    printf("Enter number of digits :");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("it is a three digits number");

    }
    else{
        printf("it is not a three digits number");

    }
    return 0;
}