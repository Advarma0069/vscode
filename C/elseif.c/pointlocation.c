#include<stdio.h>
int main(){
    int x,y;
    printf("Enter Coordinates:");
    scanf("%d %d",&x,&y);
    if(y==0){
        printf("Lies on x-axis ");
    }
    else if (x==0){
        printf("Lies on y-axis ");
    }
    else{
        printf("The point is Origin");
    }

    
    return 0;
}