#include "../include/bobbersQueue.h"
#include <stdio.h>
#include "../include/bobbersCalcInput.h"
// #include <Arduino.h>

/* MAIN FUNCTIONS START */

// void setup() {
// 	Queue queue;
// 	pushQueueTail(&queue, 'c');
// 	printQueue(&queue);
// }
//
// void loop() {
// }
int main() {
    printf("%c \n", operand_input());
    printf("%c \n", operator_input());
}

/* MAIN FUNCTIONS END */