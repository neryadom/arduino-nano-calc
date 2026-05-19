#pragma once

/* Get input from button 1. For specifying operands and operators */
int button_1_input();

/*
 * Get operand input
 * Number of button presses corresponds is the operand (domain restricted to integers greater to or equal to 1)
 */
char operand_input();

/* Get operator input, also includes brackets.
 * Number of presses: operator
 * 0: +
 * 1: -
 * 2: *
 * 3: /
 * 4: (
 * 5: )
 */
char operator_input();

