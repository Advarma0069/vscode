#include<stdio.h>
int power(int n,int m){
    if(m==0) return 1;
    int recAns = n*power(n,m-1);
    return recAns;
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