#include <stdio.h>

int f1(int n) {
  n=3;
  printf("n=%d\n", n);
  return n;
}

int main() {
  int a = 5;
  printf("a=%d\n", a);
  int r = f1(a);
  printf("r=%d\n", r);
  printf("a=%d\n", a);
}

