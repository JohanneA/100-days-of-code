#include <stdio.h>

double toFahrenheit(double celc);

int main() {
  float celc, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 5;
  celc = lower;

  printf("Celcius\tFahrenheit\n");
  while(celc <= upper) {
    printf("%3.0f\t%3.1f\n", celc, toFahrenheit(celc));
    celc +=step;
  }
}

double toFahrenheit(double celc) {
    return 9.0/5.0 * celc + 32.0;
}
