#include <stdio.h>

int main()
{
    float a,b, result; 
	  char op;
    
    printf("Digite o primeiro numero: ");
    scanf("%f",&a);
    printf("Digite o segundo numero: ");
    scanf("%f",&b);

  	printf("Escolha a operacao: ");
 	  scanf(" %c",&op);
	 
	  if(op == '+'){
		
		  result = a + b;
		  printf("O resultado e: %f", result);
  	}
    else if(op == '-'){
		
		result = a - b;
		printf("O resultado e: %f", result);
		
	 }
	 else if(op == 'x'){
		
		  result = a * b;
		  printf("O resultado e: %f", result);
		
	 }
	 else if(op == '/'){
		
	   	result = a / b;
		  printf("O resultado e: %.2f", result);
		
	 }
    return 0;
  
  
}
