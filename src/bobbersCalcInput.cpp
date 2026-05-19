#include <stdio.h>
#include "../include/bobbersCalcInput.h"

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

char operand_input() {
    return (char)(48 + (button_1_input() % 10));
}

char operator_input() {
    char operatorss[] = {'+', '-', '*', '/', '(', ')'};
    return operatorss[button_1_input() % 6];
}