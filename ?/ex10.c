//Esse código so é executável se for compilado pelo terminal

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *file;     //Tipo FILE para "declarar" o arquivo no prog

    file = fopen(argv[1], "r");      //sempre começa pelo [1] porque o [0] é sempre o nome do arquivo
                                     //"r" abre o arquivo para a leitura
    if( file == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    char linha[100];
    while(fgets(linha, sizeof(linha), file) != NULL){               //lê e printa os 100 primeiros caracteres do arquivo
        printf("%s\n", linha);
    }

    fprintf(file, "Teste\n");          //Exibir algo de dentro do arquivo
    fclose(file);                      //fecha o arquivo
    return 0;
}