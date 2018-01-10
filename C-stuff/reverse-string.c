#include <stdio.h>
#define MAXLENGTH 1000

int getlinelength(char s[], int lim) {
  int i, c;
  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  return i;
}

void reverse(char s[], char reversed[], int length) {
  int i;
  i = length - 1;
  while(i >= 0) {
    reversed[length - 1 - i] = s[i];
    i--;
  }
}

void clear(char s[], int length) {
  int i;
  for(i = 0; i < length; i++) {
    s[i] = '\0';
  }
}

int main() {
  int length;
  char input[MAXLENGTH];
  char reversedinput[MAXLENGTH];

  while((length = getlinelength(input, MAXLENGTH)) > 0) {
    reverse(input, reversedinput, length);
    printf("%s\n", reversedinput);
    clear(reversedinput, length);
  }


  return 0;
}
