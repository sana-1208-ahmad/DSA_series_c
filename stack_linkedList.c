#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;

};

struct node* top = NULL;
void linkedListTraversal(struct node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;

    }
}

int isEmpty(struct node *top){
    if (top== NULL){
        return 1;

    }else{
        return 0;

    }
}

int isFull(struct node* top){
    struct node * p = (struct node *)malloc(sizeof(struct node));
    if (p==NULL){
        return 1;

    }else{
        return 0;
    
    }
}

struct node* push(struct node* top, int x){
    if(isFull(top)){
        printf("stack Overflow\n");

    }else{
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;

    }
}

int pop(struct node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }else{
        struct node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main(){
    top = push(top, 19);
    top = push(top, 79);
    top = push(top, 80);
    top = push(top, 90);
    top = push(top, 100);
    top = push(top, 120);
    top = push(top, 130);
    
    // linkedListTraversal(top);
 
    int element = pop(top); 
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    return 0;
}  