#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    int size;
    int *arr;
};
int isFull(struct Stack *ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1; // Stack is full
    } else {
        return 0; // Stack is not full
    }
}
    int isEmpty(struct Stack *ptr) {
    if (ptr->top == -1) {
        return 1; // Stack is empty
    } else {
        return 0; // Stack is not empty
    }
}

int push(struct Stack *ptr, int value) {
    if (isFull(ptr)) {
        printf("Stack overflow! Cannot push %d\n", value);
        return -1;
    } else {
       int value = ptr->arr[ptr->top];
       ptr->top--;
       return value;
     
    }
}
int main() {
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10; // Example size
    s->top = -1; // Initialize top to -1 indicating stack is empty
    s->arr = (int *)malloc(s->size * sizeof(int)); // Allocate memory for stack array
printf("stack has been created successfully\n");

    // Example usage of the stack
   printf("before pushing, full: %d\n", isFull(s));
    printf("before pushing, empty: %d\n", isEmpty(s));
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    printf("After pushing, full: %d\n", isFull(s));
    printf("After pushing, empty: %d\n", isEmpty(s));

    

    return 0;
}