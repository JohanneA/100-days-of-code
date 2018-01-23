#include <stdio.h>

int main() {
  char str[300];
  char *s = str;
  scanf("%s", str);
  int days = 0;
  int i = 0;

  while(*s != '\0') {
    if(i % 3 == 0 && *s == 'P');
    else if (i % 3 == 1 && *s == 'E');
    else if (i % 3 == 2 && *s == 'R');
    else {
      days++;
    }
    *s++;
    i++;
  }
  printf("%d\n", days);

  return 0;
}
