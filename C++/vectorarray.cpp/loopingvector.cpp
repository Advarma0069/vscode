#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    // for loop
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);//  2 index value  6

    // for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2); //-2 index  value has removed out of space

    // while loop
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    return 0;
}