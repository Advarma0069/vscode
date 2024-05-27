// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello"<<endl<<"World"; // endl using of print next line .....//and same line print for use of cout :
//     return 0;
// } 
#include<iostream>
using namespace std;
int main(){
    int a,b;
     cout<<"a:";
     cin>>a;
     cout<<"b:";
     cin>>b;

    int c;
    c=b;
    b=a;
    a=c;
    cout<<"Value of a :"<<a<<endl;
    cout<<"Value of b :"<<a<<endl;
    

    return 0;
}