#include "mystr.h"
#include <stdio.h>

int main(int argc, char** argv) {
  char str[50];

  printf("String 1 |%s|: copy |%s|\n", argv[1], my_strncpy(str, argv[1], 50));

  return 0;
}
