#include <stdio.h>

int main()
{
    int n,x,i=0;
    
    
    scanf("%d", &n);
    
    while(i < n){
        
        scanf("%d", &x);
        
        if(x%2==0 && x!=0){
            
            printf("EVEN ");
            if(x>0){
                
              printf("POSITIVE\n");
                
            }
            else if(x<0){ 
                
                printf("NEGATIVE\n");
                
            }
           
        }
        else if(x%2!=0){
            
            printf("ODD ");
            if(x>0){
                
              printf("POSITIVE\n");
                
            }
            else if(x<0){ 
                
                printf("NEGATIVE\n");
                
            }
           
        }
        else{
            
            printf("NULL\n");
          
        }

     

        i++;
        
    }

    return 0;
}