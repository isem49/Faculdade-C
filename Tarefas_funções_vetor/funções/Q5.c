#include <stdio.h>

int calculaFatorial(int f){

  for (int i = f-1; i > 1; i--) {
      f = f * i;
  }

  printf("%d", f);
  
}

int main() {

    int x,f;
    printf("Escolha um numero: ");
    scanf("%d", &f);

    calculaFatorial(f);
  
   

    return 0; 
}

