#include <stdio.h>

int somarDigitos(int x) {

  int s = 0;
  while(x > 0){
    s = s + x % 10;
    x = x / 10;
  }

  return s;

}



int main() {
    int x;

    printf("Digite o numero: ");
    scanf("%d",&x);

    int resultado = somarDigitos(x);
    printf("A soma dos digitos e: %d ", resultado);
  

    return 0;
}