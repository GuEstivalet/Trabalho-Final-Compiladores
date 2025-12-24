#include <stdio.h>
#include <stdbool.h>

float fatorial(void Float) {
  if (x == 0.0) {
    return 1.0;
  }
  return (x * fatorial((x - 1.0)));
}

int main() {
  float n;
  float resultado;
  scanf("%f", &n);
  resultado = fatorial(n);
  printf("%f\n", resultado);
  return 0;
}
