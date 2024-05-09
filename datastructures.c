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
    struct Node *right;
    struct Node *left;
  };
  struct Node *head = NULL;
  struct Node *secondRight;
  struct Node *secondLeft = NULL;

  head = (struct Node *)malloc(sizeof(struct Node));
  secondRight = (struct Node *)malloc(sizeof(struct Node));
  secondLeft = (struct Node *)malloc(sizeof(struct Node));

  head->data = 1;
  head->right = secondRight;

  secondRight->data = 1;
  secondRight->right = NULL;

  secondLeft->data = 1;
  secondLeft->left = NULL;

  struct Node *current = head;

  while (current != NULL) {
    printf("%i", current->data);
  }
  free(head);
  free(secondRight);
  free(secondLeft);

  // Stack
  //
  struct stack {
    int items[100];
    int top;
  }

  return 0;
}
