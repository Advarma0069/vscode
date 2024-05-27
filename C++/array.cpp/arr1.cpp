#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5};
    // cout<<sizeof(array)<<endl;
   // cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size=sizeof(array)/sizeof(array[0]);

    //for Loop
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;


    }
    return 0;
}