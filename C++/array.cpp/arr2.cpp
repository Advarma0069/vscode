#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5};

    // int size=sizeof(array)/sizeof(array[0]);
    

    //for Loop
    // for(int i=0;i<size;i++){
        // cout<<array[i]<<endl;

    // }
    //for each Loop
    // for(int ele:array){
        // cout<<ele<<endl;
    // }
    //while Loop
    char vowels[5];

    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }
    return 0;
}