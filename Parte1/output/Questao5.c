#include <stdio.h>

int main() {
    int R = 1 ;
    
    float QuantP = 0, ValUniP, ValorTotC, ValorMedP, QuantTP ; 

    while(R == 1) {

    for (float i = 1; i > 0; i++){
        printf("Digite a quantidade de um produto: ") ;
        scanf("%f" , &QuantP) ;
        if (QuantP <= 0) break ;
        printf("Digite o valor unitario de um produto: ") ;
        scanf("%f" , &ValUniP) ; 
        
        ValorTotC += ValUniP * QuantP ;
        QuantTP += QuantP ;
    }

    if(QuantTP == 0) {
        printf("Nehum produto informado! \n") ; 
    }else {
    ValorMedP = ValorTotC / QuantTP ; 
    printf("\n") ;
    printf("VALOR TOTAL DA COMPRA: R$ %.2f\n" , ValorTotC) ;
    printf("VALOR MEDIO DA COMPRA: R$ %.2f\n" , ValorMedP) ;
    printf("\n") ;

    int ValorTInt = ValorTotC ;
    float Cent = ValorTotC - ValorTInt ;
    printf("O valor total da compra eh %d reais e %.2f centavo \n" , ValorTInt , Cent) ;
    printf("\n") ;

    printf("%d reais equivale a: \n" , ValorTInt) ;

    int nota100 = ValorTInt / 100; ValorTInt %= 100;
    int nota50 = ValorTInt / 50; ValorTInt %= 50;
    int nota20 = ValorTInt / 20; ValorTInt %= 20;
    int nota10 = ValorTInt / 10; ValorTInt %= 10;
    int nota5  = ValorTInt / 5;  ValorTInt %= 5;
    int nota2  = ValorTInt / 2;  ValorTInt %= 2;
    int moeda1 = ValorTInt;

        printf("%d nota(s) de 100\n", nota100);
        printf("%d nota(s) de 50\n", nota50);
        printf("%d nota(s) de 20\n", nota20);
        printf("%d nota(s) de 10\n", nota10);
        printf("%d nota(s) de 5\n",  nota5);
        printf("%d nota(s) de 2\n",  nota2);
        printf("%d moeda(s) de 1\n", moeda1);
    }

        printf("\nDeseja repetir o programa (1(Sim) ou 0(Nao))? ");
        scanf("%d", &R);         

    }

return 0; 
    
}