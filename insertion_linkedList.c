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
struct node * insertAtFirst(struct node * head, int data) {
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr; // New head of the list

   //struct node * p = head;
   //int i = 0;
   // while (p != NULL) {
     //   p = p->next;
        //i++;
    }
  
   // ptr->data = data;
    //ptr->next = p->next;
   // p->next = ptr;
   // return head; // Return the original head
   

int main() {
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;
struct node * fifth;
struct node * sixth;

// allocating memory for nodes in the linked list in heap
head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node)); 
fourth = (struct node *)malloc(sizeof(struct node)); 
fifth = (struct node *)malloc(sizeof(struct node)); 
sixth = (struct node *)malloc(sizeof(struct node));

// link first and second nodes
head->data = 8;  
head->next = second;


// link second and third nodes
second->data = 13;  
second->next = third; 
// link third and fourth nodes
third->data = 70;  
third->next = fourth; 
// link fourth and fifth nodes
fourth->data = 56;  
fourth->next = fifth;
// link fifth and sixth nodes
fifth->data = 90;  
fifth->next = sixth;
// link sixth to NULL
sixth->data = 45;  
sixth->next = NULL;

// Traversing the linked list
linkedListTraversal(head);
head = insertAtFirst(head, 250);
//head = insertAtIndex(head, 250, 3);
linkedListTraversal(head);
    return 0; // Placeholder main function
}