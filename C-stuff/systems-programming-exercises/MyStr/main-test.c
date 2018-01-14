#include "mystr.h"
#include <stdio.h>

int main(int argc, char** argv) {
  printf("String after |%c| is - |%s|\n", *argv[2], my_strchr(argv[1], *argv[2]));

  return 0;
}
