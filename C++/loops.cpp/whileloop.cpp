#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int i=1; //loop variable
    while(i<=n){
        sum+=i;
        i++;
    }
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
     cout<<sum<<endl;

    return 0;
}