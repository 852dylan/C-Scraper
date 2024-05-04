#include <stdio.h>

void fib(int n) {
  if (n == 0) {
    printf("%d", 0);
  } else if (n == 1) {
    printf("%d", 1);
  }
  int a = 0;
  int b = 1;
  printf("%d, ", a);
  printf("%d, ", b);
  for (int i = 0; i < n - 2; i++) {
    printf("%d, ", a + b);
    int temp = a;
    a = b;
    b = temp + b;
  }
}

int main() { fib(5); }
