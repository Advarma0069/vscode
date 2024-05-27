#include<iostream>
using namespace std;
int main(){
    int array[]={12,20,33,10,9,5,15};
        
    int max=array[0];
    
    for(int i=0;i<7;i++){
        if(array[i]>max){
            max=array[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
}