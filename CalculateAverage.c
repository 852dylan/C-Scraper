#include <stdio.h>

int main() {
  int count;
  printf("how many numbers would you like to average?");
  scanf("%d", &count);

  int sum;
  for (int i = 0; i < count; i++) {
    int num;
    printf("enter number %d: ", i + 1);
    scanf("%d", &num);
    sum += num;
  }
  printf("Your average is: %d", (sum / count));
  return 0;
}
