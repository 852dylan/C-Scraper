#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(const char *input) {
  char *ans = (char *)malloc((strlen(input) + 1) * sizeof(char));
  for (int i = strlen(input) - 1; i >= 0; i--) {
    ans[strlen(input) - 1 - i] = input[i];
  }
  ans[strlen(input)] = '\0';
  return ans;
}

int checkPalindrome(const char *input) {
  char *rev = reverse(input);
  int result = strcmp(rev, input);
  free(rev);
  if (result == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  const char *string = "hannah";
  printf("%d", checkPalindrome(string));
  return 0;
}
