#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    if(a>b){
        if(a>b)
        printf("%d is greater",a);
        else
        printf("%d is greater",c);
    }
    else{
        if(b>c)
        printf("%d is greater",b);
        else
        printf("%d is greater",c);
    }
     
    return 0;
}