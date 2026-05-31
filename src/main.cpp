#include "../include/bobbersQueue.h"
#include "../include/bobbersCalcInput.h"
#include <Arduino.h>

/* MAIN GLOBAL VARIABLES START */
Queue queue;
/* MAIN GLOBAL VARIABLES END */

/* MAIN FUNCTIONS START */

void setup() {
	resetQueue(&queue);
}

void loop() {
	int firstOperand = button_1_input();
	add_num_to_queue(firstOperand, &queue);
	operator_input(&queue);
	int secondOperand = button_1_input();
	add_num_to_queue(secondOperand, &queue);

	// Calculate the result of two operands and one operator from the queue
	char operand1_char;
	char operator_char;
	char operand2_char;
	popQueueHead(&queue, &operand1_char);
	popQueueHead(&queue, & operator_char);
	popQueueHead(&queue, &operand2_char);

	// Need to figure out how to do the operation with a given operator;
	printQueue(&queue);
}

/* MAIN FUNCTIONS END */