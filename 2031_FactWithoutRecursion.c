#include <stdio.h>

//Without Recursion(Using Loop)


int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n ; i++)
    fact = fact * i;
  return fact;
  
}

int main() {
  int n = 5;
  printf("factorial = %d\n" , factorial(n));
  
  return 0;
}


