#include <stdio.h>
#include <string.h>

#define TAM (15)

typedef struct{
    char nome[100];
    int idade;
} Candidato;

void ordenaInsertion(Candidato candidatos[], int n){
    for (int i = 1; i < n; i++) {
        Candidato key = candidatos[i];
        int j = i - 1;
        while (j >= 0 && candidatos[j].idade < key.idade) {
            candidatos[j + 1] = candidatos[j];
            j = j - 1;
        }
        candidatos[j + 1] = key;
    }
}

void imprimeOrdenado(Candidato candidatos[], int n){
    printf("Candidatos ordenados: \n");
    for(int i = 0; i <= TAM-1; i++){
        printf("Candidato %d: %s    |   %d\n", i+1, candidatos[i].nome, candidatos[i].idade);
    }

    printf("\n5 candidatos mais velhos:\n");
    for(int i = 0; i < 5; i++){
        printf("%s  |   %d\n", candidatos[i].nome, candidatos[i].idade);
    }
}

int main(){
        Candidato candidatos[TAM] = {
    {"Ana Paula", 45},
    {"Carlos Eduardo", 92},
    {"Fernanda Lima", 76},
    {"João Marcos", 70},
    {"Luciana Alves", 88},
    {"Bruno Rocha", 69},
    {"Marta Silva", 58},
    {"Rafael Tavares", 38},
    {"Juliana Costa", 49},
    {"Roberto Teixeira", 65},
    {"Carla Assis", 53},
    {"Radames Augusto", 47},
    {"Cleide Freitas", 85},
    {"Marinalva Vieira", 74},
    {"Beatriz Siqueira", 18}
    };

    ordenaInsertion(candidatos, TAM);
    imprimeOrdenado(candidatos, TAM);

}