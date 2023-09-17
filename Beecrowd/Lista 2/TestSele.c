#include <stdio.h>

int main() {

  int A, B, C, D, soma1,soma2;

  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  scanf("%d",&D);

  soma1 = A + B;
  soma2 = C + D;
  
  if(B > C && D > A && C >= 0 && D >= 0 && A % 2 == 0 && soma2 > soma1 ){
    printf("Valores aceitos\n");
  }else{

    printf("Valores nao aceitos\n");
  }

  
  return 0;
}