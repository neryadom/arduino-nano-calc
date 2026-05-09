#include <stdio.h>

constexpr int ledPin = 13;
constexpr int stackSize = 10; /* allow 10 elements on the operation stack */


/* STACK DEFINITION & METHODS START
 * The stack is used to hold operands and operators
 */

/* Stack used to hold operands and operators
 * Stack is held in char array, for storing the operators (* - + /) as well as the numbers (0-9)
 */
typedef struct stack_t {
	char data[stackSize];
	int top;
} Stack;

void resetStack(Stack *stack, int size){
	for (int i = 0; i < size; i++){
		stack->data[i] = 0;
	}
	stack->top = -1;
}

void pushStack(Stack *stack, const char value){
	if (stack->top == stackSize - 1) {
		printf("FULL!! CANNOT INSERT %d... STACK FULL... RESETTING STACK... ALL VALUES ARE LOST", value);
		resetStack(stack, stackSize);
	} else {
		stack->data[stack->top] = value;
		stack->top++;
	}
}

void popStack(Stack *stack, char *retBuffer){
	if (stack->top == -1) {
		printf("NOTHING TO POP");
		resetStack(stack, stackSize);
	} else {
		*retBuffer = stack->data[stack->top];
		stack->data[stack->top] = 0;
		stack->top--;
	}
}
/*
 *
STACK DEFINITION & METHODS END */


void operation() {
	Stack stack;
	resetStack(&stack, stackSize);
}

/* MAIN FUNCTIONS START */

int main() {
	return 0;
}

void setup(){}
void loop(){}


/* MAIN FUNCTIONS END */