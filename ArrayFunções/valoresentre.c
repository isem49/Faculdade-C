#include <stdio.h>

void valores_entre(int numero[], int tamanho, int max, int min) {

  int encontrados = 0;

  printf("Valores entre %d e %d: ", min, max);

  for (int i = 0; i < tamanho; i++) {
    if (numero[i] >= min && numero[i] <= max) {     
      printf("%d ", numero[i]); 
      encontrados = 1;          
    }
  }

  if (!encontrados) { 
    printf("Nenhum valor encontrado entre %d e %d.\n", min, max);
  }

  printf("\n");
}

int main(void) {
  int tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  printf("\n");

  int numero[tamanho];

  for (int i = 0; i < tamanho; i++) {
    printf("Digite o %do numero para o vetor: ", i + 1);
    scanf("%d", &numero[i]);
  }

  int max, min;

  printf("Digite o valor máximo a ser buscado: ");
  scanf("%d", &max);

  printf("Digite o valor mínimo a ser buscado: ");
  scanf("%d", &min);

  valores_entre(numero, tamanho, max, min);

  return 0;
}
