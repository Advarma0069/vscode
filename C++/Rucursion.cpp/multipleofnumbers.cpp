#include<iostream>
using namespace std;

void f(int num,int k){
    // base case
    if(k==0) return;
    // assumption
    f(num,k-1);//the function correctly prints the first k-1 multiple
    // self work
    cout<<(num * k)<<" ";
}

int main(){

    f(3,8);
    return 0;
}