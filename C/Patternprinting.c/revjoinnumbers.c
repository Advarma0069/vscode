#include<stdio.h>
int main(){
    int n;
    printf("Enter number of line: ");
    scanf("%d",&n);
    int nst=n,nsp=1;
    for(int i=1;i<=2*n;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){   //star printing..............
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){   //space printing.............
            printf(" ");

        }
        for(int j=1;j<=nst;j++){   //star printing.............
            printf("%d",j);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}