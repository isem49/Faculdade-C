#include <stdio.h>

void verificarSomas(int matrix[3][3]) {

  int somaL1 = 0;
  int somaL2 = 0;
  int somaL3 = 0;

  // Soma da primeira linha
  for (int c = 0; c < 3; c++) {
    somaL1 += matrix[0][c];
  }

  // Soma da segunda linha
  for (int c = 0; c < 3; c++) {
    somaL2 += matrix[1][c];
  }

  // Soma da terceira linha
  for (int c = 0; c < 3; c++) {
    somaL3 += matrix[2][c];
  }

  int somaC1 = 0;
  int somaC2 = 0;
  int somaC3 = 0;

  // Soma da primeira coluna
  for (int l = 0; l < 3; l++) {
    somaC1 += matrix[l][0];
  }

  // Soma da segunda coluna
  for (int l = 0; l < 3; l++) {
    somaC2 += matrix[l][1];
  }

  // Soma da terceira coluna
  for (int l = 0; l < 3; l++) {
    somaC3 += matrix[l][2];
  }

  int somaDP = 0;

  // Soma dos elementos da diagonal principal
  for (int i = 0; i < 3; i++) {
    somaDP += matrix[i][i];
  }
  int somaDS = 0;
  for (int i = 0; i < 3; i++) {
    somaDS += matrix[i][3 - 1 - i];
  }

  if (somaL1 == somaL2 && somaL2 == somaL3 && somaL3 == somaC1 &&
      somaC1 == somaC2 && somaC2 == somaC3 && somaC3 == somaDP &&
      somaDP == somaDS) {

    printf("Essa matrix é um quadrado mágico.\n");
  }
  else{

     printf("Essa matrix não é um quadrado mágico.\n");
    
  }
}

int main(void) {
  int matrix[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

  printf("Matriz 3x3:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  verificarSomas(matrix);

  return 0;
}
