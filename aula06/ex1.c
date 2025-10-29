#include <stdio.h>
#include <string.h>

#define LIN (10)
#define COL (50)


int busca_nome(int lin, int col, int nome[lin][col], char nomes[]){
    for(int i = 0; i < lin; i++){
        if(strcmp(nome[i], nomes) == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    char list[LIN][COL];
    char nomes[COL];

    for(int i = 0; i < LIN; i++){
        fgets(list, COL, stdin);
    }
    fgets(nome, COL, stdin);
    printf("Digite um nome para buscar: %s", nome);
    
    int pos = busca_nome(LIN, COL, list[LIN][COL], nome);
    printf("Posição do nome: %d", pos);

return 0;
}