#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum=0;
    int m=0;
    while(n%2==0){
        m=n%10;
        sum=sum+m;
        n=n/10;

    }
    printf("The sum of digit is %d",sum);
    return 0;
}