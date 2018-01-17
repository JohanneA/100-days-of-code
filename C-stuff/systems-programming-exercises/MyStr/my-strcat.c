#include <stdio.h>
#include <string.h>

char* my_strcat(char *dest, char *src) {
  char *temp = dest;
  while(*++temp);
  while(*temp++ = *src++);
  return dest;
}
