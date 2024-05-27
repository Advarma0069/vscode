#include<iostream>
using namespace std;
int fib(int n){
    if(n==1 or n==0) return n;
    return fib(n-1)+fib(n-2);

}
int main(){
    int result=fib(8);
    cout<<result;
    return 0;
}