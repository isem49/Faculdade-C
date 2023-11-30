#include <stdio.h>

int calculaFibonacci(int x){

  int aux1 = 0, aux2 = 1;

   for(int i=0;i<x;i++){
        if (i == 0) {
            printf("%d", aux1);
        } else {
            printf(" %d", aux1);
        }

        int fibo = aux1 + aux2;
        aux1 = aux2;
        aux2 = fibo;

    }

    printf("\n");
}

int main() {

    int x;
    printf("Escolha um numero: ");
    scanf("%d", &x);

    calculaFibonacci(x);
   

    return 0; 
}

