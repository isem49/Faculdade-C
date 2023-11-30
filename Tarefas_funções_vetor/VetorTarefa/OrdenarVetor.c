/*Escreva uma função para inverter a ordem dos elementos de um array. A função
deve receber um array de números como parâmetro e retornar um array com os
elementos invertidos.*/

#include <stdio.h>

void ordemNum(int numeros[],int tamanho) {
  
   int aux; 
  
   for(int i = 0; i < tamanho; i++){
     for(int i2 = 0; i2 < tamanho; i2++){
         if(numeros[i] < numeros[i2]){
             aux = numeros[i];
             numeros[i] = numeros[i2];
             numeros[i2] = aux;  
         }
      }
   }


  printf("Vetor ordenado:");
  for (int i = 0; i < tamanho; i++) {
      printf(" %d", numeros[i]);
     
  }
  
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

  ordemNum(numeros, tamanho);

 
}