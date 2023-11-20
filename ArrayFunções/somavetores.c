#include <stdio.h>

void somarVetor(int numeros[], int numeros2[], int somatamanho, int tamanhoVetor1) {
    int numeros3[somatamanho];

    for (int i = 0; i < somatamanho; i++) {
        if (i < tamanhoVetor1) {
            numeros3[i] = numeros[i];
        } else {
            numeros3[i] = numeros2[i - tamanhoVetor1];
        }
    }

    printf("Elementos do vetor somado:\n");
    for (int i = 0; i < somatamanho; i++) {
        printf("%d ", numeros3[i]);
    }
    printf("\n");
}


int main(void) {
      int numeros[] = {1, 2, 3, 4, 5};
      int numeros2[] = {6, 7,8,9,10};

      int tamanhoVetor1 = sizeof(numeros) /4; 
      int somaTamanho = tamanhoVetor1 + (sizeof(numeros2) /4); 

      somarVetor(numeros, numeros2, somaTamanho, tamanhoVetor1);
  
      printf("Tamanho do vetor: %d\n", somaTamanho);
      return 0;
  }