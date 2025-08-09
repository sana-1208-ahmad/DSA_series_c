#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;  
};

struct node* createNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n ->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node* root){
    if(root != NULL){
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);
    struct node *p3 = createNode(3);
    struct node *p4 = createNode(5);
    struct node *p5 = createNode(6);
    struct node *p6 = createNode(7);
    struct node *p7 = createNode(8);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    p3->left = p7;
    p3->right = NULL;
    p4->left = NULL;
    p4->right = NULL;
    p5->left = NULL;
    p5->right = NULL;
    p6->left = NULL;
    p6->right = NULL;
    p7->left = NULL;
    p7->right = NULL;
    printf("Pre-order Traversal of Binary Tree:\n");
    printf("Root -> Left -> Right\n");
    printf("Traversal: ");
    preOrder(p);
    return 0;
}