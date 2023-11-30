/*Escreva uma função para encontrar o menor número de um array de números. A função deve receber um array de números como parâmetro e retornar um int com o valor do menor número.*/

#include <stdio.h>

int menorNum(int numeros[],int tamanho) {

  printf("Digite valores para o vetor\n");
  printf("\n");

  int menor = numeros[0];

  for (int i = 0; i < tamanho; i++) {
      printf("%d° Valor: ", i + 1);
      scanf("%d", &numeros[i]);
      if (numeros[i] < menor) 
          menor = numeros[i];
      }

  return menor;
}


int main(void) {
  int tamanho;
  int menor;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  printf("\n");
  
  int numeros[tamanho];

  menor = menorNum(numeros,tamanho);

  printf("O menor numero do vetor e:%d ", menor);
  
}