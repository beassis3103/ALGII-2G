/*

Recebe 12 datas de validade de 12 produtos, ordena por Selection Sort, começando 
com a data mais próxima de vencer e imprime as três mais próximas de vencer.

*/

#include <stdio.h>

#define TAM (12)

void ordenaSelection(int datas[], int n){
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++){
            if (datas[j] < datas[min])
                min = j;
            }
        if (min != i) {
            int temp = datas[min];
            datas[min] = datas[i];
            datas[i] = temp;
        }
    }
}

void imprimeOrdenado(int datas[], int n){
    printf("Datas ordenadas:\n");
    for(int i = 0; i < n; i ++){
        printf("%d\n", datas[i]);
    }

    printf("\n");
    printf("Datas mais próximas do vencimento:\n");
    for(int i = 0; i < 3; i++){
        printf("%d\n", datas[i]);
    }
}

int main(){
    int datas[TAM] = {
        20250101,
        20250214,
        20250321,
        20250410,
        20250505,
        20250630,
        20250715,
        20250822,
        20250909,
        20251031,
        20251111,
        20251225
    };

    ordenaSelection(datas, TAM);
    imprimeOrdenado(datas, TAM);
}