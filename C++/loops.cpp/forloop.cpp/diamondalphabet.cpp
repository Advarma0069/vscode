#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp=n/2; // Number of space=nsp
    int nst=1; //Number of star=nst
    int ml=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
        
    }
    return 0;
}