
#include <stdio.h>

int main() {
  int num, soma=0, i;

  scanf("%d", &num);
  
  for (i = 1; i < num; i++){
    if (num % i == 0)
      soma = soma + i;
  }
  
  if (num == soma)
    printf("O numero %d eh perfeito\n", num);
  else 
    printf("O numero %d nao eh perfeito\n", num);

}
