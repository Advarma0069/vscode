#include<iostream>
#include<string>
#include<vector>
using namespace std; 

bool isAnagram(string s1,string s2){

    // create freq array
    vector<int> freq(26,0);

    // if lengths are different for s1,s2 then return false
    if(s1.length()!=s2.length()){
        return false;
    }
    // store frequency of characters in s1 and s2
    for(int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isAnagram(s1,s2)){
        cout<<"String are anagrams"<<endl;

    }else{
        cout<<"String are not anagrams"<<endl;
    }
    return 0;

}