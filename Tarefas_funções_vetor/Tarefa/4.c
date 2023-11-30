/*Crie um código em uma linguagem de alto nível que use uma estrutura
condicional switch para determinar o dia da semana de um número inteiro*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
   
   switch(n){
       
       case 1:
       
        printf("Domingo");
       break;
       
       case 2:
       
        printf("Segunda");
       break;
       
       case 3:
       
        printf("Terça");
       break;
       
       case 4:
       
        printf("Quarta");
       break;
       
       case 5:
       
        printf("Quinta");
       break;
       
       case 6:
       
        printf("sexta");
       break;
       
       case 7:
       
        printf("Sabado");
       break;
       
       default:
        printf("Dia invalido");
       
       
   }

    return 0;
}
