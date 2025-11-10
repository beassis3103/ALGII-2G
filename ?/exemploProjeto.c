#include <stdio.h>
#include <stdlib.h>

int main(char *file[]){
    int altura = 10;
    int largura = 6;
    int matriz[altura][largura];

    FILE *file;     

    file = fopen(file[1], "r");

    if(file == NULL){
        printf("Erro ao abrir o arquivo. Arquivo vazio.");
        return 1;
    }

    for(int i = 0; i <= altura; i++){
        for(int j = 0; j <= largura; j++){
            fscanf(file, "%d", &matriz[i][j]);
        }
    }
}