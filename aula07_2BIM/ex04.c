/*

Cria uma struct Filme, permite o cadastro de 5 filmes 
e exibe os que tem mais de 2 horas de duração.

*/

#include <stdio.h>

#define TAM (5)

typedef struct{
    char titulo[100];
    char genero[100];
    int ano;
    int duracao;
} Filme;

void cadastraFilme(Filme filmes[], int n){
    printf("Cadastre seus filmes preenchendo as informações!\n"); 
    printf("OBS: O tempo de duração dos filmes deve ser inserdo em minutos)\n\n");

    for(int i = 0; i < n; i++){
        printf("Cadastre o filme %d: \n", i+1);
        printf("Título: ");
        fgets(filmes[i].titulo, sizeof(filmes[i].titulo - 1), stdin);
        printf("Gênero: ");
        fgets(filmes[i].genero, sizeof(filmes[i].genero - 1), stdin);
        printf("Ano: ");
        scanf("%d", &filmes[i].ano);
        printf("Duração: ");
        scanf("%d", &filmes[i].duracao);
        printf("\n");
    }
  
}

void exibeMaiorDuracao(Filme filmes[], int n){
    for(int i = 0; i < n; i++){
        if(filmes[i].duracao > 120){
            printf("%s\n%s\n%d\n%d\n\n", filmes[i].titulo, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
        }
    }
}

int main(){
    Filme filmes[TAM];

    cadastraFilme(filmes, TAM);
    exibeMaiorDuracao(filmes, TAM);




}