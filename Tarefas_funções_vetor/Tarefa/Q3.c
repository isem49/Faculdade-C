#include <stdio.h>

int verificaPrimo(int x){
    

        if (x <= 1) {
            printf("%d nao eh primo\n", x);
        } 
        else if (x == 2 || x == 3) {
            printf("%d eh primo\n", x);
        } 
        else if (x % 2 == 0 || x % 3 == 0) {
            printf("%d nao eh primo\n", x);
        } 
        else {
            int aux = 0; 
            int divi = 2;
           
            while (divi < x) {
                
                if (x % divi == 0) {
                    aux++;
                   // break; 
                }
                
                divi++;
                
            }
            
            if (aux == 0) {
                printf("%d eh primo\n", x);
            } 
            else {
                printf("%d nao eh primo\n", x);
            }
        }
        
       
    
    
    
} 


int main()
{
   
   verificaPrimo(11);
   
}
