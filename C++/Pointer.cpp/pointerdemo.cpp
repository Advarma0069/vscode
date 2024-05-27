#include<iostream>
using namespace std;
int main(){
     int *ptr; //only declaring the pointer
     cout<<ptr<<"\n";
     int marks=90;
     ptr=&marks;//re-assignment / update

     cout<<ptr<<"\n";

    return 0;
}