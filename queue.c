#import <stdio.h>
#import <stdlib.h>

typedef struct {
  int values[100];
  int add;
  int front;
} Queue;

Queue *createQueue() {
  Queue *queue = malloc(sizeof(Queue));
  if (queue == NULL) {
    perror("queue malloc failed");
    exit(1);
  }
  queue->add = -1;
  queue->front = -1;
  return queue;
}

void enqueue(Queue *queue, int value) { queue->values[++queue->add] = value; }

int dequeue(Queue *queue) { return queue->values[++queue->front]; }

int peek(Queue *queue) {
  int temp = queue->front;
  temp++;
  return queue->values[temp];
}

int isEmpty(Queue *queue) {
  if (queue->add == queue->front) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  Queue *queue = createQueue();
  enqueue(queue, 5);
  printf("5: %i\n", dequeue(queue));
  enqueue(queue, 5);
  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);
  printf("5: %i\n", dequeue(queue));
  printf("1: %i\n", dequeue(queue));
  printf("2: %i\n", dequeue(queue));
  printf("3: %i\n", peek(queue));
  printf("3: %i\n", dequeue(queue));
  return 0;
}
