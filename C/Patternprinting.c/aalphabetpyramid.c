#include<stdio.h>
int main(){
    int n;
    printf("Enter number of row&column: ");
    scanf("%d",&n);

    int nsp = n-1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            int d=a+64;
            char ch = (char)d;
            printf("%c",ch);
            a++;
        }
        for(int q=1;q<=i-1;q++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a--; // if u want to continue alphabet like a ab abc ,,,,,, then after changing get  this thing
        }
        printf("\n");
    }
    return 0;
}