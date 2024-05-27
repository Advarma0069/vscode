#include<stdio.h>
int main(){
    int n;
    printf("Enter a Rows: ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        int a=i-1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int q=1;q<=i-1;q++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}