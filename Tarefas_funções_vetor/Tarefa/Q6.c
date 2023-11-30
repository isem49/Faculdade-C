#include <stdio.h>

int somaPar(int x, int aux) {
  for (int i = 1; i < x; i++) {
    if (i % 2 == 0) {
      aux = aux + i;
    }
  }

  printf("Soma igua: %d", aux);
}

int main() {
  int x, aux = 0;
  printf("Escolha um numero: ");
  scanf("%d", &x);

  somaPar(x, aux);
  return 0;
}
