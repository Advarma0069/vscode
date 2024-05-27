#include<stdio.h>
int main(){
    int L;
    printf("Enter  a  length :");
    scanf("%d",&L);
    int B;
    printf("Enter a breadth :");
    scanf("%d",&B);
    int a=L*B;
    int p=2*(L+B);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
    return 0;
}