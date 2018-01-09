#include <stdio.h>

int main() {

  int c, counter;

  counter = 0;
  while(counter < 10) {
    c = getchar();
    putchar(c);
    counter+= 2;
  }

  printf("EOF: %d\n", EOF);
  return 0;
}
