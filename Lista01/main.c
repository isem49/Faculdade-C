#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int d, m, a;

    printf("Digite o dia: ");
    scanf("%d", &d);
    printf("Digite o mês: ");
    scanf("%d", &m);
    printf("Digite o ano: ");
    scanf("%d", &a);

    if (d >= 1 && d <= 31) {
            switch (m) {
                case 1:
                    printf("%d de janeiro de %d\n", d, a);
                break;
                
                case 2:
                    if(d <= 29){
                        printf("%d de fevereiro de %d\n", d, a);
                        break;
                    }
                    else{
                        printf("Dia não reconhecido\n");
                        
                    }
                break;
                
                case 3:
                    printf("%d de março de %d\n", d, a);
                    
                break;
                
                case 4:
                    if (d >= 1 && d <= 30) {
                        printf("%d de abril de %d\n", d, a);
                        
                    } 
                    else {
                        printf("Dia não reconhecido\n");
                        
                    }
                break;
                    
                case 5:
                    printf("%d de maio de %d\n", d, a);
                break;
                    
                case 6:
                    if (d >= 1 && d <= 30) {
                        printf("%d de junho de %d\n", d, a);
                    } else {
                        printf("Dia não reconhecido");
                    }
                break;
                
                case 7:
                   printf("%d de julho de %d\n", d, a);
           
                break;
                
                case 8:
                   
                    printf("%d de agosto de %d\n", d, a);
                   
                break;
                
                case 9:
                    if (d >= 1 && d <= 30) {
                        printf("%d de setembro de %d\n", d, a);
                    } else {
                        printf("Dia não reconhecido\n");
                    }
                break;
                
                case 10:
                     printf("%d de outubro de %d\n", d, a);
                    
                break;
                
                case 11:
                    if (d >= 1 && d <= 30) {
                        printf("%d de novembro de %d\n", d, a);
                        
                    } else {
                        printf("Dia não reconhecido\n");
                        
                    }
                    break;
                    
                case 12:
                    printf("%d de dezembro de %d\n", d, a);
                    break;
                    
                default:
                    printf("Mês não reconhecido\n");
            }
        
    } 
    else {
       if(m > 12){
           
           printf("mês não reconhecido\n");
           
       }     
        printf("Dia não reconhecido\n");
        
    }

    return 0;
}
