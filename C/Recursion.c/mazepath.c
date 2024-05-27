#include<stdio.h>
int maze2(int n, int m){
    int rigthways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rigthways += maze2(n,m-1);

    }
    if(m==1){
        rigthways += maze2(n,m-1);
        downways += maze2(n-1,m)
    }
    int totalways = rigthways + downways ;
    return totalways;
 
}
int main(){
    int n;
    printf("Enter number of rows of the maze: ");
    scanf("%d",&n);
    int m;
    printf("Enter number of column of the maze: ");
    scanf("%d",&m);

    int number  = maze2(n,m);
    printf("%d",number );

    return 0;
}
