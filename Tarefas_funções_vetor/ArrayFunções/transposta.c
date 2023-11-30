#include <stdio.h>


void exibirDiagonalPrincipal(int matrix[4][4]) {
    
  
    printf("Diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2d ", matrix[i][i]);
    }
    printf("\n");
}

void exibirDiagonalSecundaria(int matrix[4][4]) {
    printf("Diagonal secundaria:\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2d ", matrix[i][(4 - 1) - i]);
    }
    printf("\n");
}

void exibirMatrixTransposta(int matrix[4][4]) {
    printf("Matriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2d ", matrix[j][i]);
        }
        printf("\n");
    }
}

int main(void) {
    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,7,9},
        {9,10,11,12},
        {13,14,15,16}
    };

    printf("Numeros da matrix: ");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");  
  
    exibirDiagonalPrincipal(matrix);
    printf("\n");
    exibirDiagonalSecundaria(matrix);
    printf("\n");
    exibirMatrixTransposta(matrix);

    return 0;
}
