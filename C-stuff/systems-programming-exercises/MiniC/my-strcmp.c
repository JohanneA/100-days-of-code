#include "mini_c.h"

int my_strcmp(const char *s1, const char *s2) {
  int i;

  while(s1[i] == s2[i]) {
    i++;
  }
  return s1[i] - s2[i];
}
