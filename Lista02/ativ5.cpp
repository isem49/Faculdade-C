#include <stdio.h>

int main()
{
    int a; 

    
    printf("Digite o  numero: ");
    scanf("%i",&a);
 

	if(a % 4 == 0){
		
		printf("o numero e divisivel por 4 ");
	}else if (a % 5 == 0){
		

		printf("o numero e divisivel por 5 ");
		
	}else{
	    
	    	printf("nao e divisivel por 4 e nem por 5");
	}

	
    return 0;
}
