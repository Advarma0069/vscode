#include<stdio.h>
int main(){
    int arr[4][2] = {{76,80},{57,81},{40,90},{21,45}};
    printf("store students roll no and marks\n");
    for(int i=0; i<4; i++){  // 4 are a rows
        for(int j=0; j<2; j++){  // 2 are a colomns
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}