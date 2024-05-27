#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    // int a=1;
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=n; j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}