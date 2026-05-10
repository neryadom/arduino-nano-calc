#include <stdio.h>
#include "../include/bobbersQueue.h"
#include <Arduino.h>

constexpr int ledPin = 13;

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
	delay(100);
	digitalWrite(ledPin, LOW);
	delay(100);
}


/* MAIN FUNCTIONS END */