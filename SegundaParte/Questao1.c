#include <stdio.h>

int main() {
    
int n;

    printf("Digite a quantidade de estrelas: ") ;
    scanf("%d", &n); 

int carneiros[10000]; 
int visitadas[10000]; 

    for (int i = 0; i < n; i++) {
        printf("Digite a quantidade de carneiros em cada estrela: ") ;
        scanf("%d", &carneiros[i]);
        visitadas[i] = 0; 
    }

int pos = 0;
    
        while (pos >= 0 && pos < n && carneiros[pos] > 0) {
        visitadas[pos] = 1; 

        if (carneiros[pos] % 2 == 1) {
            carneiros[pos]--; 
            pos++; 
        } else {
            carneiros[pos]--;
            pos--; 
        }
    }

int total_estrelas = 0;
int carneiros_restantes = 0;

    for (int i = 0; i < n; i++) {
        total_estrelas += visitadas[i];
        carneiros_restantes += carneiros[i];
    }

    printf("%d %d\n", total_estrelas, carneiros_restantes);
    
return 0;

}
