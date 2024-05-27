#include<stdio.h>
int main(){
    int a=5;
    int *x=&a;
    *x=7;
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    return 0;
}