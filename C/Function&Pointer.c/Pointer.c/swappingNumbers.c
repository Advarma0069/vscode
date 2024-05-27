#include<stdio.h>

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a=10;
    int b=9;
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
}