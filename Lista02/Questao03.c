#include <stdio.h>

int main(void) {
 
   int a,b; 

    
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

	if(a > b){
	
		printf("%d é maior", a);
	}else if (b > a){
		
		printf("%d é maior", b);
		
	}else{
	    
	    	printf("Os valores são iguais");
	}

	
    return 0;
  
   
}