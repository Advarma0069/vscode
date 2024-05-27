#include<stdio.h>
int main(){
    int n;
    printf("Enter a Rows: ");
    scanf("%d",&n);
    int nst=1,nsp=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp=nsp-1;
        int a=1;
        for(int k=1;k<=nst;k++){
            int d=a+64;
            char ch = (char)d;
            printf("%c",ch);
            a++;
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}