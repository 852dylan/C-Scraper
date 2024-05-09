#include <stdio.h>
#include <stdlib.h>

int main() {
  // array
  //

  int arr[100];
  printf("%p", arr);

  // linked list
  struct Node {
    int data;
    struct Node *next;
  };
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;

  second->data = 1;
  second->next = third;

  third->data = 1;
  third->next = NULL;

  struct Node *current = head;

  while (current != NULL) {
    printf("%i", current->data);
    current = current->next;
  }
  free(head);
  free(second);
  free(third);

  // Stack
  //
  struct stack {
    int items[100];
    int top;
  }

  return 0;
}
