#include <stdio.h>
#include "mini_c.h"

int main (int argc, char** argv) {
  if (argc == 2) {

    printf("Length of %s: %lu\n", argv[1], my_strlen(argv[1]));
    return my_strlen(argv[1]);
  } else if (argc == 3) {
    printf("Comparison is %d\n", my_strcmp(argv[1], argv[2]));
    return my_strcmp(argv[1], argv[2]);
  }

  return 0;
}
