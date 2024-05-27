#include<iostream>
using namespace std;

void f(int n){
    // base case
    if(n<1) return;
    // go and print first n-1 natural numbers-->assumption
    f(n-1);
    cout<<n<<" ";

}
int main(){
    f(20);
    return 0;
}