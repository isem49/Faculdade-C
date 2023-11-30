#include <stdio.h>

int maiorNum(int numeros[],int tamanho) {

  printf("Digite valores para o vetor\n");
  printf("\n");

  int maior = 0;

  for (int i = 0; i < tamanho; i++) {
      printf("%d° Valor: ", i + 1);
      scanf("%d", &numeros[i]);
      if (numeros[i] > maior) 
          maior = numeros[i];
      }

  return maior;
}


int main(void) {
  int tamanho;
  int maior;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  printf("\n");
  
  int numeros[tamanho];

  maior = maiorNum(numeros,tamanho);

  printf("O maior numero do vetor e:%d ", maior);
  
}