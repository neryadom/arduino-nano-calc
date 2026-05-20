#include <stdio.h>
#include "../include/bobbersCalcInput.h"

#include "../include/bobbersQueue.h"

int button_1_input() {
    int button_1_Pin = 1;
    int button_2_Pin = 2;
    int button_1_Count = 0;

    while (digitalRead(button_2_Pin) != HIGH) {
        if (digitalRead(button_1_Pin) == HIGH) {
            button_1_Count++;
            delay(50);
        }
    }
    return button_1_Count;
}

void add_num_to_queue(int num, Queue *queue) {
    char temp[10];
    int i = 0;

    while (num > 0) {
        temp[i++] = '0' + (num % 10);
        num /= 10;
    }

    while (i > 0) {
        pushQueueTail(queue, temp[i--]);
    }
}

void operand_input(Queue *queue) {
    char num = (char)(48 + (button_1_input() % 10));

    pushQueueTail(queue, num);
}

void operator_input(Queue *queue) {
    char operatorss[] = {'+', '-', '*', '/', '(', ')'};
    char operatorr = operatorss[button_1_input() % 6];
    pushQueueTail(queue, operatorr);
}