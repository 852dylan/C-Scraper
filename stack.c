#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
  int values[100];
  int top;
} Stack;

Stack *createStack() {
  Stack *stack = malloc(sizeof(Stack));
  stack->top = -1;
  return stack;
}

int push(Stack *stack, int item) {

  if (stack->top++ > 100) {
    perror("Stack Overflow:(");
    return 1;
  }

  stack->values[++stack->top] = item;
  return 0;
}

int pop(Stack *stack) { return stack->values[stack->top--]; }
int peek(Stack *stack) { return (stack->values[stack->top]); }

int main() {
  Stack *stack = createStack();
  push(stack, 1);
  printf("Should be 1: %i\n", peek(stack));
  push(stack, 2);
  printf("Should be 2: %i\n", peek(stack));
  printf("Should be 2: %i\n", pop(stack));
  printf("Should be 1: %i\n", peek(stack)); // Some errors here but ceebs
  free(stack);
  return 0;
}
