#include <stdio.h>

int main()
{
    int a,b, result; 
	char op;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

 	printf("Escolha a operacao: ");
 	scanf(" %c",&op);
	 
	if(op == '+'){
		
		result = a + b;
		printf("O resultado e: %d", result);
	}else if(op == '-'){
		
		result = a - b;
		printf("O resultado e: %d", result);
		
	}
	else if(op == 'x'){
		
		result = a * b;
		printf("O resultado e: %d", result);
		
	}
	else if(op == '/'){
		
		result = a / b;
		printf("O resultado e: %d", result);
		
	}


	
    return 0;
}
