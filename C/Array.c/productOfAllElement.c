#include<stdio.h>
int main(){
    int array[5] = {2,3,4,5,6};
    int arraysize = sizeof(array)/sizeof(array[0]);
    int product = 1;
    for(int i = 0; i < arraysize; i++){
        product*=array[i];
    }
    printf("the product of all element: %d\n",product);
    return 0;
}