#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};


    /* data */

void linkedListTraversal(struct node* ptr){
    while(ptr != NULL){
printf("Element: %d\n", ptr->data);


ptr = ptr->next;
    }
}

// case1: deleting the first node
struct node * deleteFirst(struct node * head) {
    struct node * ptr = head; // Store the current head
    head = head->next; // Move head to the next node
    free(ptr); // Free the memory of the old head
    return head; // Return the new head of the list

}

int main() {
struct node * head;
struct node * second;
struct node * third;


// allocating memory for nodes in the linked list in heap
head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node)); 


// link first and second nodes
head->data = 8;  
head->next = second;


// link second and third nodes
second->data = 13;  
second->next = third; 
// link third and fourth nodes
third->data = 70;  
third->next = NULL; 


// Traversing the linked list
printf("linked list before deletion: \n");
linkedListTraversal(head);

head = deleteFirst(head);
printf("linked list after deletion: \n");
linkedListTraversal(head);

    return 0; // Placeholder main function
}