#include<stdio.h>

void push(int x){

    if(top=size-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=x;

    }
    void pop(){
        if(top==n){
            printf("Underflow");
        }else{
            temp=stack[top];
            top--;
        }
    }
};
int main(){
    // stack
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);

    return 0;
}