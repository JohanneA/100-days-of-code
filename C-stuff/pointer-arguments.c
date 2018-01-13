#include <stdio.h>

void changeint(int *a) {
  *a *= 2;
}

int main() {
  int integer = 6;
  int *p;
  p = &integer;

  printf("%d\n", integer);
  changeint(p);
  printf("%d\n", integer);
  return 0;
}
