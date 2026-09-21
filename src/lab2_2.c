#include <stdio.h>

long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;
  int valid_input = 0;

  while (!valid_input) {
    printf("Enter an integer n: ");
    if (scanf("%d", &n) != 1) {
      printf("Error: Invalid input.\n");
      while (getchar() != '\n');
      continue;
    }

    if (n < 0) {
      printf("Error: n must be non-negative.\n");
    } else {
      valid_input = 1;
    }
  }

  long long result = factorial(n);
  printf("Factorial of %d is %lld\n", n, result);

  return 0;
}