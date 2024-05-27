#include<stdio.h>
int power(int n,int m){
    int x=1;
    for(int i=1;i<=m;i++){
        x=x*n;
    }
    return x;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int m;
    printf("Enter m: ");
    scanf("%d",&m);
    int p=power(n,m);
    printf("n raised to the power m is = %d",p);
    return 0;

}