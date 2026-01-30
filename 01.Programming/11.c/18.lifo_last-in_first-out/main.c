#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  int top;
  int capacity;
} Stack;

Stack* createStack(int capacity) {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack->capacity = capacity;
  stack->top = -1;
  stack->data = (int *)malloc(stack->capacity * sizeof(int));
  return stack;
}

void push(Stack *stack, int value) {
  if (stack->top < stack->capacity - 1) {
    stack->data[++stack->top] = value;
    printf("Push: %d\n", value);
  } else {
    printf("Stack Overflow!\n");
  }

}

int pop(Stack *stack) {
  if (stack->top >= 0) {
    return stack->data[stack->top--];
  }
  printf("Stack Underflow!\n");
  return -1;
}

int main(void) {
  Stack *myStack = createStack(5);

  push(myStack, 10);
  push(myStack, 20);
  push(myStack, 30);

  printf("Pop: %d\n", pop(myStack));
  printf("Pop: %d\n", pop(myStack));

  free(myStack->data);
  free(myStack);

  return 0;
}
