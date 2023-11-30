#include <stdio.h>

int totalPares(int numero[], int tamanho) {
  int cont = 0;

  for (int i = 0; i < tamanho; i++) {
    if (numero[i] % 2 == 0) {
      cont++;
    }
  }

  return cont;
}

int maiorNum(int numero[], int tamanho) {
  int maior = numero[0]; 

  for (int i = 1; i < tamanho; i++) {
    if (numero[i] > maior) {
      maior = numero[i];
    }
  }

  return maior;
}

int totalIguais(int numero[], int numero2[], int tamanho) {
  int total = 0;

  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {
      if (numero[i] == numero2[j]) {
        total++;
      }
    }
  }

  return total;
}

int main(void) {

  int tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  printf("\n");

  int numero[tamanho];
  int numero2[tamanho];

  for (int i = 0; i < tamanho; i++) {
    printf("Digite numeros para o primeiro vetor: ");
    scanf("%d", &numero[i]);
  }

  int cont = totalPares(numero, tamanho);
  int maior = maiorNum(numero, tamanho);

  printf("\n");

  printf("Esse vetor possui %d numeros pares\n", cont);
  printf("Maior numero: %d\n", maior);
  printf("\n");

  for (int i = 0; i < tamanho; i++) {
    printf("Digite numeros para o segundo vetor: ");
    scanf("%d", &numero2[i]);
  }

  printf("\n");

  int iguais = totalIguais(numero, numero2, tamanho);
  printf("Os dois vetores possue um total de %d numeros iguais", iguais);

  return 0;
}
