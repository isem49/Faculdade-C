#include <stdio.h>

int main(void) {
 
     int a,b,r; 

    
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

	if(a > b){
		
		r = a - b;
		printf("resultado e: %d ", r);
	}else if (b > a){
		
		r = b - a;
		printf("resultado e: %d", r);
		
	}else{
	    
	    	printf("Os valores são iguais ou seja o resultado e 0");
	}

	
    return 0;
   
}