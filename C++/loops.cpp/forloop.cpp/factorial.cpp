#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1; // 5!=1*2*3*4*5
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}