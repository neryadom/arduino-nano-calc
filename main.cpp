#include <iostream>

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

void pushStack(Stack *stack, const int value){
	if (stack->top == stackSize - 1) {
		std::cout << "FULL!! CANNOT INSERT " << value << "... STACK FULL... RESETTING STACK... ALL VALUES ARE LOST"<< std::endl;
		resetStack(stack, stackSize);
	} else {
		stack->data[stack->top] = value;
		stack->top++;
	}
}

void popStack(Stack *stack, char *retBuffer){
	if (stack->top == -1) {
		std::cout << "EMPTY!! CANNOT POP!!!" << std::endl;
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


/* MAIN FUNCTIONS END */