#include <stdio.h>

int main (){
    int taxa, selos3, selos5, i, resto;

    printf("Digite o valor da taxa: ");
    scanf("%d", &taxa);

    while(taxa < 8){
        printf("O valor mínimo é de 8 centavos, digite novamente: ");
        scanf("%d", &taxa);
    }

    selos5 = taxa / 5;
    resto = taxa - (selos5 * 5);

    i = resto % 3;
    if (i != 0){
        selos5 -= i;
        resto = taxa - (selos5 * 5);
    
    }

    selos3 = resto / 3;

    printf("\nTaxa: %d \nQuantidade de selos de 3 centavos: %d\nQuantidade de selos de 5 cnetavos: %d\n\n", taxa, selos3, selos5);

    return 0;
}