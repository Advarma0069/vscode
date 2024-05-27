#include<iostream>
using namespace std;

void swap (int &x,int &y){
    int temp=x;
    x=y;
    y=temp;

}

int main(){
    int x=9;
    int c=1;
    int &y=x;
    swap(x,c);
    cout<<x<<" "<<c<<"\n";
     
    return 0;

}