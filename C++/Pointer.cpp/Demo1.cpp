#include<iostream>
using namespace std;
int main(){
    int x=18;
    float y=7.9;

    // Create a pointer that can store address of x;
    // As x is an integer variable,so we need a pointer
    // that can store address of integer type
    int *ptr=&x;
    cout<<"Address stored inside prt: "<<ptr<<"\n";
    cout<<"Value present at the address stored in ptr: "<<*ptr<<"\n";
    // Create a pointer that can store address of y
    // y is a float variable,so we need to store it in a 
    // float pointer

    float *ptrf=&y;
    cout<<"Address stored inside prtf: "<<ptrf<<"\n";
    cout<<"Value present at the address stored in ptrf: "<<*ptrf<<"\n";

    x=23; //the bucket x updated the value from 18-->23
    // but ptr is still pointing to same bucket
    
    cout<<"New value of x: "<<x<<"\n";
    cout<<"Ptr still pointing to same memory which has 23 instead of 18 ="<<*ptr<<"\n";

    // updating x with pointer
    *ptr =50;
    cout<<"New value of x: "<<x<<"\n";
    cout<<"New value pointed by ptr: "<<*ptr<<"\n";

    int valueAtX = *ptr;
    cout<<valueAtX<<"\n";
    return 0;
}