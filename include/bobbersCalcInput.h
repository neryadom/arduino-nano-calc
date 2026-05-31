#pragma once
#include "bobbersQueue.h"

#define BUTTON_1_PIN  5
#define BUTTON_2_PIN  6
#define OPERATORS_ARRAY {'+', '-', '*', '/', '(', ')'}


/* Get input from button 1. For specifying operands and operators */
int button_1_input();


/* Takes an integer and a queue pointer. It converts "num" to a char array, then pushes those chars on the queue */
void add_num_to_queue(int num, Queue *queue);

/* Takes an integer and a queue pointer.
 * It takes the operator at index "op" in the Macro-defined array of operators.
 * Then it pushes onto the queue the operator at that index
 */
void add_operator_to_queue(int op, Queue *queue);

/*
 * Get operand input
 * Number of button presses corresponds is the operand (domain restricted to integers greater to or equal to 1)
 */
void operand_input(Queue *queue);

/* Get operator input, also includes brackets.
 * Number of presses: operator
 * 0: +
 * 1: -
 * 2: *
 * 3: /
 * 4: (
 * 5: )
 */
void operator_input(Queue *queue);

