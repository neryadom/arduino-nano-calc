#include <stdio.h>
#include <Arduino.h>

constexpr int ledPin = 13;
constexpr int queueSize = 10; /* allow 10 elements on the operation queue */


/* QUEUE DEFINITION & METHODS START
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

void printQueue(Queue *queue) {
	printf("\nPRINTING QUEUE START\n");
	for (int i = 0; i < queueSize; i++) {
		printf("%c ", queue->data[i]);
	}
	printf("\nPRINTING QUEUE END\n");
}
/*
 *
QUEUE DEFINITION & METHODS END */


/* MAIN FUNCTIONS START */
// int main() {
// 	Queue queue;
// 	resetQueue(&queue);
// 	printQueue(&queue);
// 	pushQueueTail(&queue, '5');
// 	pushQueueTail(&queue, '*');
// 	pushQueueTail(&queue, '3');
// 	pushQueueTail(&queue, '=');
// 	printQueue(&queue);
// 	char buffer;
// 	popQueueHead(&queue, &buffer);
// 	printf("Popped from head: %c", buffer);
// 	printQueue(&queue);
// 	popQueueHead(&queue, &buffer);
// 	printf("Popped from head: %c", buffer);
// 	printQueue(&queue);
// 	popQueueHead(&queue, &buffer);
// 	printf("Popped from head: %c", buffer);
// 	printQueue(&queue);
// 	popQueueHead(&queue, &buffer);
// 	printf("Popped from head: %c", buffer);
// 	printQueue(&queue);
// 	popQueueHead(&queue, &buffer);
// 	printf("Popped from head: %c", buffer);
// 	printQueue(&queue);
// 	return 0;
// }

void setup() {
	pinMode(13, OUTPUT);
}
void loop() {
	digitalWrite(ledPin, HIGH);
	delay(50);
	digitalWrite(ledPin, LOW);
	delay(50);
}


/* MAIN FUNCTIONS END */