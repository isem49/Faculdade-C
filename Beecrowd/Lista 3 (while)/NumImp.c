#include <stdio.h>

int main()
{
    int x = 0, i = 0;
    
    scanf("%d", &x);
    
    while(i <= x){
        
        if(i != 0 && i%2==1){
            
            printf("%d\n", i);
            
        }
        
        i++;
    }

    return 0;
}