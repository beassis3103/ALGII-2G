#include <stdio.h>
#include <stdlib.h>

int main(char *file[]){
    int largura, altura;
    char tipo[3];
    FILE *file;     

    file = fopen(file[1], "r");

    if(file == NULL){
        printf("Erro ao abrir o arquivo. Arquivo vazio.");
        return 1;
    }
  
    fgets(tipo, sizeof(tipo), file);

    if(tipo[0] = 'P' || tipo[1] = '1'){
        printf("Tipo de arquivo inválido. Deve ser P1.");
        return 1;
    }
    fscanf(file, "%d %d", &altura, &largura);
    int matriz[altura][largura];

    for(int i = 0; i <= altura; i++){
        for(int j = 0; j <= largura; j++){
            fscanf(file, "%d", &matriz[i][j]);
        }
    }
    fclose(file);
    codificar_imagem(altura, largura, matriz);

    return 0;
}
