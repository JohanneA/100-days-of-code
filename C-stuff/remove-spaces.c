#include <stdio.h>
#define MAXLENGTH 1000

int getlinelength(char s[], int lim) {
  int i, c;
  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if(c == '\n') {
    s[i] = c;
    i++;
  }
  return i;
}

int main() {
  int linelength;
  char line[MAXLENGTH];

  while((linelength = getlinelength(line, MAXLENGTH)) != EOF) {
    int i;

    for(i = linelength - 1; line[i] == '\n' || line[i] == '\t' || line[i] == ' '; i--) {
      line[i] = '\0';
    }
    printf("%s\n", line);
  }
  return 0;
}
