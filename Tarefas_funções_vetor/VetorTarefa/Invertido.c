/*Escreva uma função para inverter a ordem dos elementos de um array. A função
deve receber um array de números como parâmetro e retornar um array com os
elementos invertidos.*/

#include <stdio.h>

void invertNum(int numeros[],int tamanho) {
  
    printf("Vetor Invertido:");
    for (int i = tamanho-1; i >= 0; i--) {
        printf(" %d", numeros[i]);
    }  
    
}


int main(void) {
  int tamanho;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  printf("\n");

  int numeros[tamanho];
 
  
  for (int i = 0; i < tamanho; i++) {
    printf("%d° Valor: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  printf("\n");
  printf("Vetor original:");
  for (int i = 0; i < tamanho; i++) {
    printf(" %d", numeros[i]);
  }
  
  printf("\n");
  invertNum(numeros,tamanho);

 
  
}