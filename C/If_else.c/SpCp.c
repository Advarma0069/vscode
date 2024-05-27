#include<stdio.h>
int main(){
    int cp;
    printf("Enter cast price :");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        
        printf("profit");

    }
    if(cp>sp) {
        printf("Loss");
    }
    return 0;
}
