#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head){
    struct Node *ptr=head;
    do{
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
}

struct Node *insertAtfirst(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=11;
    head->next=second;

    second->data=23;
    second->next=third;

    third->data=34;
    third->next=fourth;

    fourth->data=45;
    fourth->next=head;

    printf("circular linkedlist before inserting\n");
    linkedListTraversal(head);

    head=insertAtfirst(head,10);

    printf("\ncircular linkedlist after inserting\n");
    linkedListTraversal(head);
    return 0;
}