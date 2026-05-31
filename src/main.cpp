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
	int firstOperator = button_1_input();
	add_operator_to_queue(firstOperator, &queue);
	int secondOperand = button_1_input();
	add_num_to_queue(secondOperand, &queue);

	// Calculate the result of two operands and one operator from the queue
	// Here

	// Need to figure out how to do the operation with a given operator;
	printQueue(&queue);
}

/* MAIN FUNCTIONS END */