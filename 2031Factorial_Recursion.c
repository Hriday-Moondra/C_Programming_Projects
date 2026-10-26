#include <stdio.h>
//Using   Recursion

int factorial(int n) {
  if (n==0)
    return 1; //base case
  return n * factorial(n - 1);
}
int main() {
  int n = 5;
  printf("factorial = %d\n",
    factorial(n));
  return 0;
}


