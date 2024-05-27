#include<iostream>
#include<vector>
using namespace std;
// int binarySearch(vector<int> &input,int target){

//     int lo = 0;
//     int hi = input.size()-1;

//     while(lo <= hi){
//         int mid = (lo+hi)/2;
//         if(input[mid] == target) return mid;
//         else if(input[mid] < target){
//             lo = mid + 1;
//         }else{
//             hi = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
     
//     vector<int> input{2,4,5,7,15,24,45,50};
//     int target = 24;
//     cout<< binarySearch(input,target)<<" ";
//     return 0;
// }
int firstOccurence(vector<int> &input,int target){
    int lo = 0 , hi = input.size()-1;
    int ans =-1;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(input[mid]==target){
            ans = mid;
            hi = mid - 1;
        }else if(input[mid]>target){
            hi=mid - 1;
        }else {
            lo = mid - 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    cout<< firstOccurence(arr,target)<<"\n";

    return 0;
}