#include <stdio.h>

int main(void) {
 
  
  
   float a,b,c;
    char nome[15];
    

    
    printf("Digite a primeira nota: ");
    scanf("%f",&a);
    printf("Digite a segunda nota: ");
    scanf("%f",&b);
    printf("Digite a terceira nota: ");
    scanf("%f",&c);
    printf("Digite o seu nome: ");
    scanf(" %s",&nome);

    
   	float m = (a+b+c)/3;
    
    if(m >= 7 ){
    	
    	printf(" parabens %s sua nota e %f voce foi aprovado", nome, m );
	}  else if(m <= 5){
		
		printf("%s sua nota e %f voce foi reprovado",nome, m );
		
	}else if (m >= 5.1 || m <= 6.9 ){
			
			printf("%s sua nota e %f voce esta de recuperacao",nome, m );
		
	}
  
  
  
  
  return 0;
}
