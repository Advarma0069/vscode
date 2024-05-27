#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            
        }
        hcf=1;
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter first Number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second Number: ");
    scanf("%d",&b);

    int hcf=gcd(a,b);
    printf("The HCF/GCD of %d & %d is: %d",a,b,hcf);
    return 0;
}