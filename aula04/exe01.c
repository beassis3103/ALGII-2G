#include <stdio.h>
#define TAMANHO_VETOR 7

int modificaVetor(){

}

int main(){
    int numeros[TAMANHO_VETOR];

    for (int i = 0; i < TAMANHO_VETOR; i++){
        printf("Insira o valor: [%d]", i);
        scanf("%d", &numeros[i]);
    }
}