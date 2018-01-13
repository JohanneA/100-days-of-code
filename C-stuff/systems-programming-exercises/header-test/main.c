#include <stdio.h>
#include "hello.h"

int main(int argc, char* argv) {
  say_hello();
  if(argc == 2) {
    printf("%s\n", argv[1]);
  }

  return 0;
}
