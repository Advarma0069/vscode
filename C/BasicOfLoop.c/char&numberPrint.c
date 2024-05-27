#include<stdio.h>
int main(){
    int n;
    printf("Enter a values: ");
    scanf("%d",&n);
    // what is type of casting
    int a=1;
    for(int i=1;i<=n;i++){
        int d=a+64;
        char ch=(char)d;
        printf("%c",ch);
        a++;
        // printf("%c ",ch);
    }
    // printf("%c ",ch);
    return 0;
}