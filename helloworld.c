#include "sqrt.h"
#include <stdio.h>
int main(void) {
  int num = 5;
  int *pNum = &num;
  printf("%d\n", num);
  printf("%d\n", *pNum);
  pNum -= 2;
  printf("after change\n");
  printf("%d\n", num);
  printf("%d\n", *pNum);
  printf("%p\n", (void *)&num);
  printf("%p\n", (void *)pNum);
  printf("hello world");
  printf("%f", computeSqrt(5));
  return 0;
}
