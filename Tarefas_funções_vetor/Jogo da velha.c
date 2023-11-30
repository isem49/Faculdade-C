#include <stdio.h>

char tabuleiro[3][3]; // Matriz para o tabuleiro 3x3

// Função para inicializar o tabuleiro
void 0 () {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[i][j] = '-';
        }
    }
}

// Função para exibir o tabuleiro
void exibir_tabuleiro() {
    int i, j;
    printf("\nTabuleiro:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se há um vencedor ou se o jogo está empatado
char verificar_vencedor() {
    int i;

    // Verificar linhas e colunas
    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro[i][2] && tabuleiro[i][0] != '-') {
            return tabuleiro[i][0];
        }
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i] == tabuleiro[2][i] && tabuleiro[0][i] != '-') {
            return tabuleiro[0][i];
        }
    }

    // Verificar diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2] && tabuleiro[0][0] != '-') {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0] && tabuleiro[0][2] != '-') {
        return tabuleiro[0][2];
    }

    // Verificar se o jogo está empatado
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == '-') {
                return ' ';
            }
        }
    }
    return 'E'; // Empate
}

// Função principal do jogo
int main() {
    int linha, coluna;
    char jogador = 'X';
    char vencedor = ' ';

    inicializar_tabuleiro();

    printf("Jogo da Velha!\n");
    printf("Jogador 1: X | Jogador 2: O\n");

    while (vencedor == ' ') {
        exibir_tabuleiro();

        // Entrada de linha e coluna do jogador
        printf("Jogador %c, digite a linha (0-2) e coluna (0-2) separadas por espaço: ", jogador);
        scanf("%d %d", &linha, &coluna);

        // Verifica se a entrada é válida e se a posição está vazia
        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == '-') {
            tabuleiro[linha][coluna] = jogador;
            // Verifica o vencedor após cada jogada
            vencedor = verificar_vencedor();

            // Troca o jogador
            if (jogador == 'X') {
                jogador = 'O';
            } else {
                jogador = 'X';
            }
        } else {
            printf("Movimento inválido, tente novamente!\n");
        }
    }

    // Exibir o resultado final
    exibir_tabuleiro();
    if (vencedor == 'X' || vencedor == 'O') {
        printf("Parabéns, o jogador %c venceu!\n", vencedor);
    } else {
        printf("O jogo terminou em empate!\n");
    }

    return 0;
}
