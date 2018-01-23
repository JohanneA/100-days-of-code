#include <stdio.h>

struct Point {
  int x;
  int y;
};

int main() {
  struct Point pt;
  struct Point *p = &pt;

  (*p).x = 5;
  (*p).y = 7;

  printf("%d,%d\n", (*p).x, (*p).y);

  return 0;
}
