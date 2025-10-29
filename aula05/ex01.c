#include <stdio.h>
#define LIN 4
#define COL 4


void popula_matriz(int lin, int col, int m[LIN][COL]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("M [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprime_matriz(int lin, int col, int m[LIN][COL]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }
}

int main (){
    int matriz[LIN][COL];
    popula_matriz(LIN, COL, matriz);
    imprime_matriz(LIN, COL, matriz);
}