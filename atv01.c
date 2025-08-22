#include <stdio.h>

int main(){
    int taxa, resto, i3, i5, valorFinal;

    printf("Digite o valor da taxa: ");
    scanf("%d", &taxa);

    if(taxa < 8){
        printf("Valor mínimo é 8 centavos!");
    }

    if (taxa % 3 != 0){
        for (i5 = 0; i5 <= taxa / 5; i5++ ) {
        resto = taxa - (i5 * 5);
        if(resto % 3 == 0){
            i3 = resto / 3;
            valorFinal = i3 + i5;
        }
    }
        
    }

     printf("Quantidade total de selos: %d\nQuantidade de selos de 3 centavos: %d\nQuantidade de selos de 5 centavos: %d\n", valorFinal, i3, i5);
}