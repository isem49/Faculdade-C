/*Exercício prático: Crie um código em uma linguagem de alto nível que use uma
estrutura condicional if-else para determinar se um número é par ou ímpar.*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0){
        
        printf("Par");
        
    }
    else{
        
         printf("Impar");
    }
    

    return 0;
}
