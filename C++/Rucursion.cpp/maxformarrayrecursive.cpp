#include<iostream>
using namespace std;

int f(int *arr,int idx,int n){
    //base case
    if(idx==n-1){
        //we only have one element left,so it is the maximum
        return arr[idx];
    }
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){

    int arr[]={3,10,3,2,5};//in these function value print only maximum value
    int n=5;
    cout<<f(arr,0,n);
    return 0;
}