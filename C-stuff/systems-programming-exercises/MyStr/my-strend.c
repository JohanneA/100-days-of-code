#include <stdio.h>

int strend(const char *s, char *t) {
  char *temp = t;
  while(*++s);
  while(*++temp);
  while(*--s == *--temp);
  *temp++;
  if(temp == t) {
    return 1;
  }
  return 0;
}
