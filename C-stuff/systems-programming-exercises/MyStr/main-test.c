#include "mystr.h"
#include <stdio.h>

int main(int argc, char** argv) {
  char str1[50] = "Hello";


  printf("String 1 |%s| - String 2 |%s| - Together |%s|\n", argv[1], argv[2], my_strcat(str1, argv[2]));

  return 0;
}
