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

void add_operator_to_queue(const int op, Queue *queue) {
    constexpr char operator_array[] = OPERATORS_ARRAY;
    const char selected_op = operator_array[op % 6];
    pushQueueTail(queue, selected_op);
}