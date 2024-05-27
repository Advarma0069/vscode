#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;

    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }
    void insertAtTail(int value){

        Node* new_node = new Node(value);
        if(head==NULL){ //linkedlist is empty
        head=new_node;
        return;

        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;

    }
    void display(){

        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
// assume k is always less than/equal length of linked list
void removeKthNodeFromEnd(Node* &head,int k){

    Node* ptr1 = head;
    Node* ptr2 = head;

    // move ptr2 by k steps ahead
    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }

    if(ptr2==NULL){ // k is equal to length of linked list
        // we have to delete head node
        Node* temp = head;
        head = head->next;
        free(temp);
        return;

    }
    // now ptr2 is  k steps ahead of ptr1
    // when ptr2 is at null(end of list),ptr1 will be at node to be deleted
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    // now ptr1 is pointing to the node before kth node from end
    // node to be deleted is ptr1->next
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    removeKthNodeFromEnd(ll.head, 5);
    ll.display();

    return 0;
}