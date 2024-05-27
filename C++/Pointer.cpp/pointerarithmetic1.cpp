#include<iostream>
using namespace std;

int main(){
    int x=20;
    double dec=9.8;
    int *ptr = &x;
    double *ptrd = &dec;

    cout<<"size of x is: "<<sizeof(x)<<"\n";
    cout<<"size of dec is: "<<sizeof(dec)<<"\n";

    cout<<ptr<<" "<<(ptr+1)<<"\n";
    cout<<ptrd<<" "<<(ptrd+1)<<"\n";

    return 0;
}