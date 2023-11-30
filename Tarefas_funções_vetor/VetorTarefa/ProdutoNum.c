/*Escreva uma função para inverter a ordem dos elementos de um array. A função
deve receber um array de números como parâmetro e retornar um array com os
elementos invertidos.*/

#include <stdio.h>

int produtoNum(int numeros[],int tamanho) {
  
   int produto = 1; 
  
   for (int i = 0; i < 3; i++) {

     produto = produto * numeros[i];

   }

    return produto;
    
}


int main(void) {
  int tamanho;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  printf("\n");

  int numeros[tamanho];
 
  printf("Digite valores para o vetor\n");
  printf("\n");

  for (int i = 0; i < tamanho; i++) {
      printf("%d° Valor: ", i + 1);
      scanf("%d", &numeros[i]);
  }

  int produto = produtoNum(numeros, tamanho);

  printf("O produto e igual a %d\n ", produto);
  
 
  
}