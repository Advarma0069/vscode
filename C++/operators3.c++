#include<iostream>
using namespace std;

int main(){

    int num1 = 5;

    //Bitwise operators
    
    cout<<(num1<<1)<<endl; //10
    cout<<(num1>>1)<<endl; //2

    int num2=8; //1000
    cout<<(num1&num2)<<endl; //0
    cout<<(num1|num2)<<endl; //1101=1

    return 0;

}