#include <stdio.h>
#define MAXLENGTH 1000
#define PRINTINGLENGTH 80

int getlinelength(char s[], int lim) {
  int i, c;

  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  return i;
}

int main() {
  int currentlinelength;
  char currentline[MAXLENGTH];

  while((currentlinelength = getlinelength(currentline, MAXLENGTH)) > 0) {
    if(currentlinelength >= PRINTINGLENGTH) {
      printf("%s\n", currentline);
    }
  }
  return 0;
}
