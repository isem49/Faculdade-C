/* p = n * p; */

#include <stdio.h>

int main(){
    
    float a=1,b=2,c=3,m;
    
    
    while(a < b && b < c){
        
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        
       if (a < b && b < c){
           
           m = (a+b+c)/3;
           
            printf("Soma: %.2f\n", a + b + c);
            printf("Produto: %.2f\n", a * b * c);
            printf("Produto: %.2f\n", m);
           
       }
       
    }
    
}    
    
   
