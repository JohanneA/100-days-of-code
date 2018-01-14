#include "mini_c.h"

int my_strcmp(const char *s1, const char *s2) {
  int i;

  while(s1[i] == s2[i] && !(s1[i] == '\0' || s2[i] == '\0')) {
    i++;
  }
  return s1[i] - s2[i];
}
