/*Faça um programa em C que calcula o produto dos números digitados pelo usuário. O
programa em C deve permitir que o usuário digite uma quantidade não determinada
de números. O programa em C encerra quando o usuário digita o valor zero. */

#include <stdio.h>

int main(){
    
    int n = 1, p = 1;
    
    while(n != 0){
        
        scanf("%d",&n);
        
        if(n != 0){
            
             p = n * p;
            
        }
           
        
    }
    
    printf("%d", p);
    
}
