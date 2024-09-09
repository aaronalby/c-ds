#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    int items[MAX];
    int front, rear;
} Queue;


void initialize(Queue *q) {
    q->front = 0;
    q->rear = -1;
}


int isEmpty(Queue *q) {
    return q->rear < q->front;
}


int isFull(Queue *q) {
    return q->rear == MAX - 1;
}


void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    q->items[++q->rear] = value;
    printf("Inserted %d\n", value);
}


int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1; 
    }
    return q->items[q->front++];
}


void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50); 

    display(&q);

    printf("Dequeued %d\n", dequeue(&q));
    printf("Dequeued %d\n", dequeue(&q));

    display(&q);

    return 0;
}

