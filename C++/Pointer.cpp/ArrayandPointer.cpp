#include<iostream>
using namespace std;

int main(){
    int arr[3]={15,12,6};
    int n=3;
    int *ptr=&arr[0];

    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<"\n";

    cout<<*(arr+0)<<" "<<*(arr+1)<<" "<<*(arr+2)<<"\n"; //basically (arr+0) 1,2 print index values;
    
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<"\n";
    }
    return 0;

}