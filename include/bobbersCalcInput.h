#pragma once
#include "bobbersQueue.h"

#define BUTTON_1_PIN  5
#define BUTTON_2_PIN  6
#define OPERATORS_ARRAY {'+', '-', '*', '/', '(', ')'}


/* Get input from button 1. For specifying operands and operators */
int button_1_input();


/* Takes an integer and a queue pointer.
 * It converts "num" to a char array, then pushes those chars on the queue */
void add_num_to_queue(int num, Queue *queue);

/*
 * Takes an integer and a queue pointer.
 * It takes the operator at index "op" in the Macro-defined array of operators then it pushes it onto the queue.
 * The operators and their indices are defined as:
 * 0: +
 * 1: -
 * 2: *
 * 3: /
 * 4: (
 * 5: )
 */
void add_operator_to_queue(int op, Queue *queue);
