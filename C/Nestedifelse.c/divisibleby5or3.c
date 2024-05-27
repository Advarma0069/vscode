#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("The number is divisible by 5 or 3");
        }
        else{
            printf("The number is not divisible by 5 or 3");
        }

        // printf("it is divisible by 5");

    }
    else{
         printf("it is not divisible by 5");

    }
    return 0;
}