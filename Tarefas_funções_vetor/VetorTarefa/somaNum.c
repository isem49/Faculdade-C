/*Escreva uma função para inverter a ordem dos elementos de um array. A função
deve receber um array de números como parâmetro e retornar um array com os
elementos invertidos.*/

#include <stdio.h>

int somaNum(int numeros[],int tamanho) {
  
   int soma = 0; 
  
   for (int i = 0; i < 3; i++) {

     soma = soma + numeros[i];

   }

    return soma;
    
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

  int soma = somaNum(numeros, tamanho);

  printf("A soma e igual a %d\n", soma);
  
 
  
}