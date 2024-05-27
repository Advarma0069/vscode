#include<iostream>
using namespace std;

int main(){
    int num1=6;
    int num2=3;
     
     //Arithmetic operators

    cout<<num1+num2<<endl;//6+3=9
    cout<<num1-num2<<endl;//6-3=3
    cout<<num1*num2<<endl;//6*3=18
    cout<<num1/num2<<endl;//6/3=2 remender is one
    cout<<num1%num2<<endl;//6%3=0 remender zero


    //Relational operators

    cout<<(num1==num2)<<endl;//false
    cout<<(num1!=num2)<<endl;//true
    cout<<(num1>=num2)<<endl;//true
    cout<<(num1<=num2)<<endl;//true
    
    // Assignment Operators
    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;


    

    return 0;

}