#include<stdio.h>
#include<stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node {
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr) {
    printf("printing the elements of the linked list:\n");
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int val) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL) {
        printf("Memory error\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){
            f=r=n;
        }else{
            r->next = n;
            r=n;
        }
    }
}

int dequeue(){
    int val = -1;
    struct node *ptr = f;
    if(f == NULL) {
        printf("Queue is empty\n");
    } else {
        f = f->next;
        val = ptr->data;
        free(ptr);
}
    return val;
}

int main(){
    linkedListTraversal(f);
    printf("Dequeued element: %d\n", dequeue());
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}