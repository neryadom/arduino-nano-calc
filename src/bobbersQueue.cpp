#include <stdio.h>

#include "bobbersQueue.h"


void resetQueue(Queue *queue){
    for (int i = 0; i < queueSize; i++){
        queue->data[i] = '.';
    }
    queue->head = -1;
    queue->tail = -1;
}

void pushQueueTail(Queue *queue, const char value){
    if ((queue->tail + 1) % queueSize == queue->head) {
        printf("FULL!! CANNOT INSERT %c... QUEUE FULL... RESETTING QUEUE... ALL VALUES ARE LOST\n", value);
        resetQueue(queue);
    } else {
        queue->tail = (queue->tail + 1) % queueSize;
        queue->data[queue->tail] = value;
        if (queue->head == -1) queue->head = 0;
    }
}

void popQueueHead(Queue *queue, char *retBuffer) {
    if (queue->head == -1) {
        printf("QUEUE EMPTY");
        return;
    }
    *retBuffer = queue->data[queue->head];
    queue->data[queue->head] = '.';
    if (queue->head == queue->tail) {
        queue->head = -1;
        queue->tail = -1;
    } else {
        queue->head = (queue->head + 1) % queueSize;
    }
}

void printQueue(const Queue *queue) {
    printf("\nPRINTING QUEUE START\n");
    for (int i = 0; i < queueSize; i++) {
        printf("%c ", queue->data[i]);
    }
    printf("\nPRINTING QUEUE END\n");
}
