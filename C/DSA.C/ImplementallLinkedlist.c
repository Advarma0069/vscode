#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head_ref, int new_data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}
// Function to insert a node after a given location
void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
// Function to delete a node from the beginning of the linked list
void deleteFromBeginning(struct Node** head_ref) {
    if (*head_ref == NULL)
        return;
    struct Node* temp = *head_ref;
    *head_ref = temp->next;
    free(temp);
}
// Function to delete a node from the end of the linked list
void deleteFromEnd(struct Node** head_ref) {
    if (*head_ref == NULL)
        return;
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    if (prev != NULL)
        prev->next = NULL;
    if (temp == *head_ref)
        *head_ref = NULL;
    free(temp);
}
// Function to delete a node from a given location
void deleteNode(struct Node** head_ref, int position) {
    if (*head_ref == NULL)
        return;
    struct Node* temp = *head_ref;
    if (position == 0) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL)
        return;
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
// Function to display the linked list
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    // Insert at beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    printf("Linked list after insertion at beginning: ");
    display(head);

    // Insert at end
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    printf("Linked list after insertion at end: ");
    display(head);

    // Insert after a given location
    insertAfter(head->next, 50);
    printf("Linked list after insertion after a given location: ");
    display(head);

    // Delete from beginning
    deleteFromBeginning(&head);
    printf("Linked list after deletion from beginning: ");
    display(head);

    // Delete from end
    deleteFromEnd(&head);
    printf("Linked list after deletion from end: ");
    display(head);

    // Delete from a given location
    deleteNode(&head, 1);
    printf("Linked list after deletion from a given location: ");
    display(head);

    return 0;
}
