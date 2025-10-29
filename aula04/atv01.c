#include <stdio.h>

float calc_media(float notas[], int n){
    float soma = 0;
    
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }
    float media = soma/n;

    return media;
}

void imprimirResults(float notas[], int tam){
    for(int i = 0; i < tam; i++){
        if (notas[i] <= 7.0){
            printf("Aluno %d está de recuperação.", i+1);
        }
    }

}

int main(){
    int qtd_alunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    float nota[qtd_alunos];

    for(int i = 0; i < qtd_alunos; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
    }

    printf("%.2f\n", calc_media(nota, qtd_alunos));
    imprimirResults(nota, qtd_alunos);
}