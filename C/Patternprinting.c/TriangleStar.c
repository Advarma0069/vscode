#include<stdio.h>
int main(){
    int n;
    printf("Enter a star: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            printf("8");
        }
        printf("\n");
    }
    return 0;
}