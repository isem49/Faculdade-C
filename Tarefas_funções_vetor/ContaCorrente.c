Alunos: Cícero Ricardo(Júnior) RA = 202001; 
	Francielly RA = 201879;
	Luana Yasmim RA = 201968;
	Luis Fernando RA = 201867;
	Maria Olivia RA = 202049; 


#include <stdio.h>

int main()
{
    int n, opcaoPix;
    float saldo = 0,deposito, saque, pix;
  
    while(n!=5){
        printf("Saldo: RS %.2f\n",saldo);
        printf("O que você quer fazer?\n");
        
        
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Fazer Pix\n");
        printf("4. Visitar Loja\n");
        printf("5. Sair\n");
        
        printf("Sua opção: ");
        scanf("%d", &n);
       
        switch(n){
            case 1:
                printf("Digite quanto você quer depositar: ");
                scanf("%f",&deposito);
                if(deposito <=0)
                    printf("Valor do deposito invalido\n");
                else
                    saldo = deposito + saldo;
                break;
            case 2:
                printf ("digite quanto voce quer sacar: ");
                scanf ("%f", &saque);
                if(saque <=0 || saque > saldo)
                    printf("Valor do saque invalido\n");
                else
                    saldo= saldo - saque;
                break;
            case 3:
                printf("Digite 1 para enviar o pix ou digite 2 para receber o pix: \n");
                scanf("%i", &opcaoPix);
                if(opcaoPix==1){
                    printf("Digite o valor para enviar o pix:\n");
                    scanf("%f", &pix);
                    if(pix <=0 || pix > saldo)
                        printf("Valor do pix invalido\n");
                    else
                        saldo -= pix;
                }else{
                    printf("Digite o valor para receber pelo pix:\n");
                    scanf("%f", &pix);
                    if(pix <=0)
                        printf("Valor do pix invalido\n");
                    else
                        saldo += pix;

                }
                break;
            case 4:
                printf("(Voce foi redirecionado para a loja) Bem-vindo a Americanas!\n");
                break;
            case 5:
                printf("Voce saiu da sua conta\n");
                n= 5;
                break;
            default: 
            printf("Operacao invalida\n");
        }      
            
    }

    return 0;
}
  