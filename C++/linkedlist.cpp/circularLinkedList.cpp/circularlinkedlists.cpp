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
class CircularLinkedList{

    public:
    Node* head;

    CircularLinkedList(){
        head=NULL;
    }

    void display(){

        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp=temp->next;

        }while(temp!=head);
        cout<<endl;
    }

    void printCircular(){
        Node* temp=head;
        for(int i=0;i<15;i++){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<endl;
    }
    void insertAtStart(int val){

        Node * new_node= new Node(val);
        if(head==NULL){
            head = new_node;
            new_node->next = head; //circular linked list
            return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail=tail->next;
        }
        // now tail is pointing to the last node
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    void insertAtEnd(int val){

        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head; //circular linked list
            return;
        }
        Node* tail = head;
        while(tail->next!=head){
            tail=tail->next;

        }
        // here tail will be  pointing to last node

        tail->next=new_node;
        new_node->next=head;
    }
};

int main(){

    CircularLinkedList cll;
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.display();
    // cll.printCircular();
     
    cll.insertAtEnd(8);
    cll.display();

    return 0;
}