#include <stdio.h> 

int main() {

int A1, A2, A3;

    printf("Digite o numero de pessoas em cada andar: \n") ;
    scanf("%d\n %d\n %d" , &A1, &A2, &A3) ; 
    
    int Min1 = 2*A2 + 4*A3 ;
   
    int Min2 = 2*A1 + 2*A3 ; 
    
    int Min3 = 4*A1 + 2*A2 ; 
    
    int MT = Min1 ; 
    if (Min2 < MT) MT = Min2 ; 
    if (Min3 < MT) MT = Min3 ;  
    printf("%d" , MT) ; 
    
return 0; 

}