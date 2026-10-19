#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int front;
  int back;
  int size;
  int *array;
} Queue;  

Queue* create (int size);
void destroy (Queue *q);
int empty (Queue *q);
int full (Queue *q);
void enqueue (int e, Queue *q);
int dequeue (Queue *q);
void print (Queue *q);
