#include "../include/bobbersQueue.h"
#include <Arduino.h>

/* MAIN FUNCTIONS START */

void setup() {
	Queue queue;
	pushQueueTail(&queue, 'c');
	printQueue(&queue);
}

void loop() {
}

/* MAIN FUNCTIONS END */