#include <stdio.h>

int main() {

    int numero, conta, VerificadorInformado ;

    while (numero < 1000 || numero > 9999)
    {
        printf("Digite o numero da conta com 4 digitos (Ex: 1234): \n") ; 
        scanf("%d" , &numero) ;
    }
    
    conta = numero / 10 ; 
    VerificadorInformado = numero % 10 ; 

    int centena = conta / 100 ; 
    int dezena = (conta / 10) % 10 ;
    int unidade = conta % 10 ;
    int contaInvertida = unidade * 100 + dezena * 10 + centena ;

    int soma = conta + contaInvertida ;

    int d1 = soma / 100 ;
    int d2 = (soma / 10) % 10 ; 
    int d3 = soma % 10; 
    
    int resultado = d1 * 1 + d2 * 2 + d3 * 3 ;

    int verificadorCorreto = resultado % 10 ;

    printf("Numero da conta: %d\n", conta);
    printf("Digito verificador informado: %d\n", VerificadorInformado);
    printf("Dugito verificador correto: %d\n", verificadorCorreto);

    if (VerificadorInformado == verificadorCorreto)
    {
        printf("A conta esta correta! \n") ;
    }else {
        printf("A conta esta incorreta! \n") ; 
    }
    
return 0;

}