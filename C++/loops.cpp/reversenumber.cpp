#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int lastdigits=n%10;
        rev=rev*10+lastdigits;
        n=n/10;
        // rev=rev+(n%10);
        // rev*=10;
        // n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}