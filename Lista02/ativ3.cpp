#include <stdio.h>

int main()
{
    int a,b; 

    
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

	if(a > b){
	
		printf("%d � maior", a);
	}else if (b > a){
		
		printf("%d � maior", b);
		
	}else{
	    
	    	printf("Os valores s�o iguais");
	}

	
    return 0;
}
