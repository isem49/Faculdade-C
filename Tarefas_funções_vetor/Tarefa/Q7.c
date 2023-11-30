#include <stdio.h>

int calculaPotencia(int b, int e) {
    int resultado = 1;

    for (int i = 0; i < e; i++) {
        resultado *= b;
    }

    return resultado;
}

int main() {
    int b, e;
  
    printf("Digite a base: ");
    scanf("%d", &b);
  
    printf("Digite o expoente: ");
    scanf("%d", &e);

    int resultado = calculaPotencia(b, e);
    printf("%d",resultado);

    return 0;
}