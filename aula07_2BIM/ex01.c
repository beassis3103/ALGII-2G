#include <stdio.h>

#define TAM (20)


void ordenaBubble(int temp[], int n){
    int troca;
    for (int i = 0; i <= n - 1; i++) {
        troca = 0;
        for (int j = 0; j <= n-i-1; j++) {
            if (temp[j] > temp[j+1]) {
                int aux = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = aux;
                troca = 1;
            }
        }
        
        if (troca == 0)
            break;
    }
}

void imprimeOrdenado(int temp[], int n){
    for(int i = 0; i <= n; i++){
        printf("Temperatura %d: %d\n", i+1, temp[i]);
    }

   printf("Temperatura máxima: %d\n", temp[n]);
   printf("Temperatura mínima: %d\n", temp[0]); 
}


int main(){
    int temp[TAM];

    for(int i = 0; i <= TAM -1; i++){
        printf("Digite a temperatura %d: ", i+1);
        scanf("%d", &temp[i]);
    }

    printf("\n");

    ordenaBubble(temp, TAM);
    imprimeOrdenado(temp, TAM);
}