#include <stdio.h>

int main()
{
    int n = 0,p,i,m;
    
    while(i < 100){
        
        i++;
       
        scanf("%d",&n);
        
        if(n > m || n == 0){
            
            m = n;
            p = i;
        }
     
    }
    
    printf("%d\n",m);
    printf("%d\n",p);

    return 0;
}
