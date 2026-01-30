#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  int head;
  int tail;
  int size;
  int capacity;
} Queue;

Queue* createQueue(int capacity) {
  Queue *q = (Queue *)malloc(sizeof(Queue));
  q->capacity = capacity;
  q->data = (int *)malloc(q->capacity * sizeof(int));
  q->head = 0;
  q->tail = 0;
  q->size = 0;
  return q;
}

void enqueue(Queue *q, int value) {
  if (q->size == q->capacity) {
    printf("Queue Full!\n");
    return;
  }
  q->data[q->tail] = value;
  q->tail = (q->tail + 1) % q->capacity;
  q->size++;
  printf("Enqueue: %d\n", value);
}

int dequeue(Queue *q) {
  if (q->size == 0) {
    printf("Queue Empty!\n");
    return -1;
  }
  int value = q->data[q->head];
  q->head = (q->head + 1) % q->capacity;
  q->size--;
  return value;
}

int main(void) {
  Queue *myQueue = createQueue(5);

  enqueue(myQueue, 100);
  enqueue(myQueue, 200);
  enqueue(myQueue, 300);

  printf("Dequeue: %d\n", dequeue(myQueue));
  printf("Dequeue: %d\n", dequeue(myQueue));

  free(myQueue->data);
  free(myQueue);
  return 0;
}
