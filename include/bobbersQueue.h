#pragma once

constexpr int queueSize = 10; /* allow 10 elements on the operation queue */


/* QUEUE DECLARATION & METHODS DECLARATION START
 * The queue is used to hold operands and operators
 */

/* Queue used to hold operands and operators
 * Queue data is held in char array, for storing the operators (* - + /) as well as the numbers (0-9)
 */
typedef struct queue_t {
    char data[queueSize];
    int head;
    int tail;
} Queue;


void resetQueue(Queue *queue);
void pushQueueTail(Queue *queue, char value);
void popQueueHead(Queue *queue, char *retBuffer);
void printQueue(const Queue *queue);


/*
 *
/* QUEUE DECLARATION & METHODS DECLARATION START */