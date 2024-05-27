#include<iostream>
#include<vector>
using namespace std;
void coutSort(vector<int> &v){

    int n = v.size();


    // finding the max element
    int max_ele = INT_MIN;
    for(int i=0; i<n; i++){
        max_ele = max(v[i], max_ele);
    }
    //create the freq array
    vector<int> freq(max_ele+1, 0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    // calculate cumulative freq
    for(int i=1;i<=max_ele;i++){
        freq[i] += freq[i-1];
    }
    // calculate the sorted array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }
    // copy back the ans to original array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
int main(){
    
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    coutSort (a);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    return 0;
}