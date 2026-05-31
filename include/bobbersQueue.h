#pragma once

#define QUEUE_SIZE 10 /* allow 10 elements on the operation queue */


/* QUEUE DECLARATION & METHODS DECLARATION START
 * The queue is used to hold operands and operators
 */

/* Queue used to hold operands and operators
 * Queue data is held in char array, for storing the operators (* - + /) as well as the numbers (0-9)
 */
typedef struct queue_t {
    char data[QUEUE_SIZE];
    int head;
    int tail;
} Queue;


/* Sets all elements in a queue with the period sign '.' and then resets the tail and head to -1 */
void resetQueue(Queue *queue);

/* Adds value to the tail of the queue. If Queue is full, then it is wiped with resetQueue */
void pushQueueTail(Queue *queue, char value);

/* Places tail value of the queue into a buffer, then removes the tail from the Queue. */
void popQueueHead(Queue *queue, char *retBuffer);

/* Prints space separated elements of the queue on a single line*/
void printQueue(const Queue *queue);


/*
 *
 * QUEUE DECLARATION & METHODS DECLARATION START */