#include<iostream>
using namespace std;

bool prime(int num){
    //function checks if the number is prime number or not 
    for(int i=2;i<=(num-1);i++){
         if(num%i==0) return false;

    }
    return true;
    
}
int main(){
    int a=2 ,b=100;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}