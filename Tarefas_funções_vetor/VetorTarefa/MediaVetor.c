/*Escreva uma função para calcular a média de um array de números. A função
deve receber um array de números como parâmetro e retornar um double com o
valor da média*/

#include <stdio.h>

double calcularMedia(double tamanho, double numeros[]) {

  double soma = 0;
    
    for (int i = 0; i < 3; i++) {
      
      soma = soma + numeros[i];
      
    }

    return soma / tamanho;

}


int main(void) {
  
  double soma[3];
  int tamanho = sizeof(soma) / 8;

  printf("Digite valores para o vetor\n");
  printf("\n");
  
  for (int i = 0; i < 3; i++) {
      printf("%d° Valor: ", i + 1);
      scanf("%lf", &soma[i]);
  }

  double media = calcularMedia(tamanho, soma);

  printf("\n");
  printf("Media = %lf", media);
  
}