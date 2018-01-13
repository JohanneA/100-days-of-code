#include <stdio.h>

int main() {
  char array[] = "Johanne";
  char *p;
  int i;

  p=array;
  for (i = 0; i < 7; i++) {
    printf("%c at adress %x\n", *p, &p);
    p++;
  }
  return 0;
}
