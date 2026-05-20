#pragma once
#include "bobbersQueue.h"

/* Get input from button 1. For specifying operands and operators */
int button_1_input();


/* Adds numbers to queue (for operands) */
void add_num_to_queue(int num, Queue *queue);

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

