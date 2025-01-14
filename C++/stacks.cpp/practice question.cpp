// #include<iostream>
// using namespace std;

// class stack{
//     int capacity;
//     int* arr;
//     int top;
//     public:
//     stack(int c){
//         this->capacity=c;
//         arr=new int[c];
//         this->top=-1;
//     }
//     void push(int data){
//         if(this->top==this->capacity-1){
//             cout<<"Overflow\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top]=data;
//     }
//     int pop(){
//         if(this->top==-1){
//             cout<<"Underflow\n";
//         }
//         this->top--;
//     }
//     int getTop(){
//         if(this->top==-1){
//             cout<<"Underflow\n";
//         }
//         return this->arr[this->top];
//     }
//     bool isEmpty(){
//         return this->top==-1;
//     }
//     int size(){
//         return this->top+1;
//     }
//     bool isFull(){
//         return this->top==this->capacity-1;
//     }
// };
// int main(){

//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);

//     cout<<st.getTop()<<"\n";
    
//     st.push(4);
//     st.push(5);

//     cout<<st.getTop()<<"\n";
//     st.push(8);

//     st.pop();
//     st.pop();
//     cout<<st.getTop()<<"\n";

//     return 0;
// }
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    st.push(5);

    cout<<st.top()<<"\n";
    st.pop();
    st.pop();

    cout<<st.top()<<"\n";
    cout<<st.empty()<<"\n";
    return 0;
}