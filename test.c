#include <stdio.h>

int main() {
  int y = 50;
  int *x = &y;
  printf("hello %d", *x);
  return 0;
}
