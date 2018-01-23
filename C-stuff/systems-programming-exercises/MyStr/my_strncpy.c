#include <stdio.h>

char *my_strncpy(char *dst, const char *src, unsigned n) {
  char *temp = dst;
  while(*temp++ = *src++) {
    if(!n--) {
      *temp = '\0';
    }
  }
  *temp = '\0';
  return dst;
}
