#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q){
    if((q->r+1)%q->size==q->f){
return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("This queue if full");
    }else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r]= val;
        printf("Enqueued element %d\n", val);
    }
}

int dequeue(struct circularQueue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("This queue is empty");
    }
    else{
        q->f = (q->f + 1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
     
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
     
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
   

       
    enqueue(&q, 790);

    if(isEmpty(&q)){
        printf("queue is empty\n");

    }
    if(isFull(&q)){
        printf("queue is full\n");

    }
    return 0;
}