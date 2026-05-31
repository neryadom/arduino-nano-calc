#include "../include/bobbersCalcInput.h"
#include "../include/bobbersQueue.h"
#include <Arduino.h>

int button_1_input() {
    int button_1_Count = 0;
    while (digitalRead(BUTTON_2_PIN) != HIGH) {
        if (digitalRead(BUTTON_1_PIN) == HIGH) {
            button_1_Count++;
            delay(200);
        }
    }
    return button_1_Count;
}

void add_num_to_queue(int num, Queue *queue) {
    char temp[QUEUE_SIZE];
    int i = 0;
    while (num > 0) {
        temp[i++] = '0' + (num % 10);
        num /= 10;
    }
    while (i > 0) pushQueueTail(queue, temp[i--]);
}

void add_op_to_queue(char op, Queue *queue) {
    pushQueueTail(queue, op);
}

void operand_input(Queue *queue) {
    char num = (char)(48 + (button_1_input() % 10));
    pushQueueTail(queue, num);
}

void operator_input(Queue *queue) {
    char operators_array[] = OPERATORS_ARRAY;
    char current_op = operators_array[button_1_input() % 6];
    pushQueueTail(queue, current_op);
}