#include<iostream>
using namespace std;

void selectonSort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        
        // finding the minimum element
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_index],fruit[j])>0){
                min_index=j;
            }
        }
        // place the min element at the beginning
        if(i!=min_index){
            swap(fruit[i],fruit[min_index]);
            char temp[60]
            strcpy() 
        }
        
    }
    return;
}

int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(fruit)/sizeof(fruit[0]);

    selectionSort(fruit, n);

    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";

    }
    cout<<endl;

    return 0;
}