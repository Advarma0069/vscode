#include<iostream>
#include<stack>
using namespace std;

void insertAt(stack<int> &st, int x, int idx){
    stack<int> temp;
    int n = st.size();
    int count =0;
    while(count < n - idx){
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x); //this is the point where x got inserted at the bottom
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4); //top
    insertAt(st,100,1);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<"\n";
    }
    return 0;
}