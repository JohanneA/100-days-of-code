#include "mini_c.h"

unsigned long my_strlen(const char *s) {
  int c;
  for (c = 0; s[c] != '\0'; c++);
  return c;
}
