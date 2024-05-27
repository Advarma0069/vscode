#include<stdio.h>

void england(){
    printf("England\n"); //6
    return; //7
}
void australia(){
    printf("Australia\n");
    england(); //calling england 4
    return; //5
}
void india(){
    printf("India\n");// 3
    australia(); // calling australia 2
    return;
}

int main(){
    india();  //calling india 1
    return 0;
}